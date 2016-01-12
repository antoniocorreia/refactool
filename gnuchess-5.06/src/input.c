/* GNU Chess 5.0 - input.c - Input thread and related
   Copyright (c) 2002 Free Software Foundation, Inc.

   GNU Chess is based on the two research programs 
   Cobalt by Chua Kong-Sian and Gazebo by Stuart Cracraft.

   GNU Chess is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   GNU Chess is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GNU Chess; see the file COPYING.  If not, write to
   the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.

   Contact Info: 
     bug-gnu-chess@gnu.org
     cracraft@ai.mit.edu, cracraft@stanfordalumni.org, cracraft@earthlink.net
     lukas@debian.org
*/

/*
 * All the pthread stuff should be hidden here, all the
 * readline things, too. (I.e., all the potentially troublesome
 * libraries.
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


#include "common.h"

#ifdef HAVE_LIBREADLINE
# ifdef HAVE_READLINE_READLINE_H
#  include <readline/readline.h>
#  include <readline/history.h>
# else
extern char* readline(char *);
extern void add_history(char *);
# endif
#endif

/* Variable used to communicate with the main thread */
volatile int input_status = INPUT_NONE;
  
char inputstr[MAXSTR];

/*
 * The readline getline(), notice that even if we have readline,
 * it is not used if stdin is not a tty.
 */

#ifdef HAVE_LIBREADLINE
void getline_readline(char * p)
{
  char *inp;

  inp = readline(p);
  dbg_printf("getline_readline() called, input is >%s<\n", inp ? inp : "NULL");
  if (inp && *inp) {
    add_history(inputstr);
    strncpy(inputstr, inp, MAXSTR-1);
    inputstr[MAXSTR-1] = '\0';
  } else {
    inputstr[0] = '\0';
  }
  if (inp) {
    free(inp);
  }
}
#endif /* HAVE_LIBREADLINE */

/* The generic input routine */

void getline_standard(char *p)
{
  if (!(flags & XBOARD)) {
    fputs(p, stdout);
    fflush(stdout);
  }
  fgets(inputstr, MAXSTR, stdin);
}

static pthread_t input_thread;

/* Mutex and condition variable for thread communication */

static pthread_mutex_t input_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t input_cond = PTHREAD_COND_INITIALIZER;

void *input_func(void *arg __attribute__((unused)) )
{
  char prompt[MAXSTR] = "";

  while (!(flags & QUIT)) {
    if (!(flags & XBOARD)) {
      sprintf(prompt,"%s (%d) : ", 
	      RealSide ? "Black" : "White", 
	      (RealGameCnt+1)/2 + 1 );
    }
    getline(prompt);
    input_status = INPUT_AVAILABLE;
    pthread_mutex_lock(&input_mutex);
    pthread_cond_wait(&input_cond, &input_mutex);
    pthread_mutex_unlock(&input_mutex);
  }
  return NULL;
}

void input_wakeup(void)
{
  pthread_mutex_lock(&input_mutex);
  pthread_cond_signal(&input_cond);
  input_status = INPUT_NONE;
  pthread_mutex_unlock(&input_mutex);
}

/* XXX: The following definitely needs improvement. --Lukas */

void wait_for_input(void)
{
#ifdef HAVE_NANOSLEEP
  struct timespec delay, remains;
  delay.tv_sec=0;
  delay.tv_nsec=50000000; /* 50 milliseconds */
#else /* NO HAVE_NANOSLEEP */
#ifdef HAVE_USLEEP 
  unsigned long usec=50000 ; /* 50 milliseconds */
#endif /* HAVE_USLEEP */
#endif /* No HAVE_NANOSLEEP */
  while (input_status == INPUT_NONE) { 

#ifdef HAVE_NANOSLEEP
    nanosleep(&delay,&remains);
#else /* No HAVE_NANOSLEEP */
#ifdef HAVE_USLEEP
    usleep(usec);
#endif /* HAVE_USLEEP */
#endif /* No HAVE_NANOSLEEP */
  };
//  while (input_status == INPUT_NONE) /* Busy loop */ ;
}

void InitInput(void)
{
#ifdef HAVE_LIBREADLINE
  if (isatty(STDIN_FILENO)) {
    getline = getline_readline;
    using_history();
  } else {
    getline = getline_standard;
  }
#else
  getline = getline_standard;
#endif
  /* Start input thread */
  pthread_create(&input_thread, NULL, input_func, NULL);
}

void CleanupInput(void)
{
  pthread_join(input_thread, NULL);
}
