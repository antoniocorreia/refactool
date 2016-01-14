/*
 * ui-textmode.c  ---  Implementation of ui-textmode.h.
 *
 * Copyright (C)  2000,2002  Marco Parrone.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif /* HAVE_CONFIG_H */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <errno.h>
#include <error.h>
#include <ctype.h>
#include <libintl.h>
#include <locale.h>
#include "tris.h"
#include "cmdline.h"
#include "ui-textmode.h"

void
show_licensing_help (void)
{
  printf (_("mptris version %s, Copyright (C) 2000,2002 Marco Parrone.\n"
	    "mptris comes with ABSOLUTELY NO WARRANTY;"
	    " for details type \"w [RETURN]\".\n"
	    "This is free software, and you are welcome to redistribute it\n"
	    "under certain conditions; type \"c [RETURN]\" for details.\n"),
	    PACKAGE_VERSION);
}

void
get_option (char *option)
{
  char tmp;

  printf("mptris: ");
  *option = tmp = getchar ();

  while (tmp != '\n' && tmp != EOF)
    tmp = getchar ();
}

void
change_level (unsigned int *level)
{
  unsigned int inp;
  char tmp;

  printf (_("Insert level (0-9): "));
  inp = tmp = getchar ();

  while (tmp != '\n' && tmp != EOF)
    tmp = getchar ();

  if (!isdigit (inp))
    {
      error_at_line (0, 0, __FILE__, __LINE__,
		     _("invalid level \"%c\"."), inp);
      return;
    }
  else
    *level = inp - 48;
}

void
change_auto_display (unsigned int *adsp)
{
  char *line = NULL;
  unsigned int len = 0;
  int resp = 0;

  fputs (_("Do you want autodisplay active? "), stdout);
  fflush (stdout);

  while (getline (&line, &len, stdin) >= 0)
    {
      resp = rpmatch (line);
      if (resp == 1)
	{
	  *adsp = 1;
	  break;
	}
      else if (resp == 0)
	{
	  *adsp = 0;
	  break;
	}
    }
}

void
show_warranty (void)
{
  system ("less \"+/NO WARRANTY\" "DATADIR"/COPYING");
}

void
show_copying (void)
{
  system ("less \"+/TERMS AND CONDITIONS\" "DATADIR"/COPYING");
}

void
show_help (void)
{
  printf (_("Commands:\n"
	    "w\tShows details about the NON-warranty\n"
	    "c\tShows copying conditions details\n"
	    "h\tShows this help.\n"
	    "1-9\tInserts the X in the respective entry\n"
	    "\t(numpad-like mapping).\n"
	    "p\tShows the game board.\n"
	    "k\tShows the key-mapping of the game-board\n"
	    "l\tShows the current difficulty level.\n"
	    "L\tChanges the difficulty level.\n"
	    "d\tShows if autodisplaying is enabled.\n"
	    "D\tChanges the autodisplay status.\n"
	    "r\tResets.\n"
	    "q\tQuits.\n"));
}

void
reset_game (unsigned int **board)
{
  unsigned int entry;

  for (entry = 0; entry < 10; entry++)
    (*board)[entry] = 0;
}

char
return_char (const unsigned int *board,
	     const unsigned int entry)
{
  return (board[entry] == 2) ? 'X' : (board[entry] == 1) ? 'O' : ' ';
}

void
print_board(const unsigned int *board)
{
  printf ("\n  %c | %c | %c \n ___|___|___\n"
	  "  %c | %c | %c\n ___|___|___\n  %c | %c | %c\n    |   |\n\n",
	  return_char (board, 1), return_char (board, 2),
	  return_char (board, 3), return_char (board, 4),
	  return_char (board, 5), return_char (board, 6),
	  return_char (board, 7), return_char (board, 8),
	  return_char (board, 9));
}

void
print_board_keymap (void)
{
  printf ("\n  7 | 8 | 9 \n ___|___|___\n"
	  "  4 | 5 | 6\n ___|___|___\n  1 | 2 | 3\n    |   |\n\n");
}

void
main_loop (unsigned int **board,
	   unsigned int level,
	   unsigned int auto_display)
{
  char inp;

  while (1)
    {
      if (auto_display == 1)
	print_board (*board);

      get_option (&inp);

      switch (inp)
	{
	case 'w':
	  show_warranty ();
	  break;
	case 'c':
	  show_copying ();
	  break;
	case 'h':
	  show_help ();
	  break;
	case '1':
	  main_loop_helper (board, level, 7);
	  break;
	case '2':
	  main_loop_helper (board, level, 8);
	  break;
	case '3':
	  main_loop_helper (board, level, 9);
	  break;
	case '4':
	  main_loop_helper (board, level, 4);
	  break;
	case '5':
	  main_loop_helper (board, level, 5);
	  break;
	case '6':
	  main_loop_helper (board, level, 6);
	  break;
	case '7':
	  main_loop_helper (board, level, 1);
	  break;
	case '8':
	  main_loop_helper (board, level, 2);
	  break;
	case '9':
	  main_loop_helper (board, level, 3);
	  break;
	case 'p':
	  print_board (*board);
	  break;
	case 'k':
	  print_board_keymap ();
	  break;
	case 'l':
	  printf (_("Difficulty level: %u/10\n"), level);
	  break;
	case 'L':
	  change_level (&level);
	  break;
	case 'd':
	  printf (_("Autodisplay is %s.\n"),
		  (auto_display) ? _("on") : _("off"));
	  break;
	case 'D':
	  change_auto_display (&auto_display);
	  break;
	case 'r':
	  reset_game (board);
	  break;
	case 'q':
	  exit (EXIT_SUCCESS);
	default:
	  error_at_line (0, 0, __FILE__, __LINE__,
			 _("invalid command \"%c\""), inp);
	  break;
	}
    }
}

void
main_loop_helper (unsigned int **board,
		  const unsigned int level,
		  const unsigned int position)
{
  if ((*board)[0] == 1)
    {
      error_at_line (0, 0, __FILE__, __LINE__, _("game over."));
      return;
    }


  if (insert_in_board (board, position))
    return;

  insert_in_board_cpu (board, level);
  end_game_if_needed (board);
}

unsigned int
insert_in_board (unsigned int **board,
		 const unsigned int position)
{
  if ((*board) [position] != 0)
    {
      error_at_line (0, 0, __FILE__, __LINE__,
		     _("invalid command: entry not empty"));
      return 1;
    }

  (*board)[position] = 2;
  return 0;
}

void
insert_in_board_cpu (unsigned int **board,
		     const unsigned int level)
{
  unsigned int entry;

  entry = get_at_level (*board, level);

  if (entry != 0)
    (*board)[entry] = 1;
}

void
end_game_if_needed (unsigned int **board)
{
  unsigned int checked_val;

  checked_val = check_end (*board);
  switch (checked_val)
    {
    case 0:
      break;
    case 1:
      printf (_("You won.\n"));
      (*board)[0] = 1;
      break;
    case 2:
      printf (_("You losed.\n"));
      (*board)[0] = 1;
      break;
    case 3:
      printf (_("Game drawn.\n"));
      (*board)[0] = 1;
      break;
    default:
      break;
    }
}

int
main(int argc,
     char **argv)
{
  unsigned int *board;
  struct gengetopt_args_info args_info;

  setlocale (LC_MESSAGES, "");
  bindtextdomain (PACKAGE, LOCALEDIR);
  textdomain (PACKAGE);

  if (cmdline_parser (argc, argv, &args_info) != 0)
    exit (1);

  if (! args_info.level_given)
    args_info.level_arg = 8;

  if (args_info.level_arg < 0 || args_info.level_arg > 10)
    error_at_line (1, 0, __FILE__, __LINE__,
		   _("wrong argument to \"--level\" (\"-l\")"));

  if (args_info.level_arg < 0 || args_info.level_arg > 10)
    error_at_line (1, 0, __FILE__, __LINE__,
		   _("wrong argument to \"--level\" (\"-l\")"));

  board = alloca (sizeof (unsigned int) * 10);
  if (board == NULL)
    error_at_line (1, errno, __FILE__, __LINE__,
		   _("cannot alloc memory for board"));

  reset_game (&board);
  show_licensing_help ();
  printf (_("\nType \"h [RETURN]\" for help.\n"));
  tris_init ();
  main_loop (&board, args_info.level_arg, args_info.autodisplay_flag);

  exit (0);
}
