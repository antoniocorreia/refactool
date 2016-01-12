/*
  File autogenerated by gengetopt version 2.6  
  generated with the following command:
  gengetopt 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
/* Check for configure's getopt check result.  */
#ifndef HAVE_GETOPT_LONG
#include "getopt.h"
#else
#include <getopt.h>
#endif

#ifndef HAVE_STRDUP
#define strdup gengetopt_strdup
#endif /* HAVE_STRDUP */

#include "cmdline.h"

#include <libintl.h>

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n", PACKAGE, VERSION);
}

void
cmdline_parser_print_help (void)
{
  cmdline_parser_print_version ();
  printf(_("\n"
	   "Purpose:\n"
	   "  mptris is a tic-tac-toe game.\n"
	   "\n"
	   "Usage: %s [OPTIONS]...\n"
	   "   -h      --help          Print help and exit\n"
	   "   -V      --version       Print version and exit\n"
	   "   -lINT   --level=INT     The difficulty level\n"
	   "   -d      --autodisplay   Displays the game board automatically (default=on)\n"), PACKAGE);
}


int
cmdline_parser (int argc, char * const *argv, struct gengetopt_args_info *args_info)
{
  int c;	/* Character of the parsed option.  */
  int missing_required_options = 0;	

  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->level_given = 0 ;
  args_info->autodisplay_given = 0 ;
#define clear_args() { \
  args_info->autodisplay_flag = 1;\
}

  clear_args();

  optarg = 0;
  optind = 1;
  opterr = 1;
  optopt = '?';

  while (1)
    {
      int option_index = 0;
      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "version",	0, NULL, 'V' },
        { "level",	1, NULL, 'l' },
        { "autodisplay",	0, NULL, 'd' },
        { NULL,	0, NULL, 0 }
      };

      c = getopt_long (argc, argv, "hVl:d", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          clear_args ();
          cmdline_parser_print_help ();
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
          clear_args ();
          cmdline_parser_print_version ();
          exit (EXIT_SUCCESS);

        case 'l':	/* The difficulty level.  */
          if (args_info->level_given)
            {
              fprintf (stderr, _("%s: `--level' (`-l') option given more than once\n"), PACKAGE);
              clear_args ();
              exit (EXIT_FAILURE);
            }
          args_info->level_given = 1;
          args_info->level_arg = atoi (optarg);
          break;

        case 'd':	/* Displays the game board automatically.  */
          if (args_info->autodisplay_given)
            {
              fprintf (stderr, _("%s: `--autodisplay' (`-d') option given more than once\n"), PACKAGE);
              clear_args ();
              exit (EXIT_FAILURE);
            }
          args_info->autodisplay_given = 1;
          args_info->autodisplay_flag = !(args_info->autodisplay_flag);
          break;

        case 0:	/* Long option with no short option */

        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          exit (EXIT_FAILURE);

        default:	/* bug: option not considered.  */
          fprintf (stderr, _("%s: option unknown: %c\n"), PACKAGE, c);
          abort ();
        } /* switch */
    } /* while */

  if ( missing_required_options )
    exit (EXIT_FAILURE);


  return 0;
}
