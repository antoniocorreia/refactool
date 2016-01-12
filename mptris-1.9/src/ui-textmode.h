/*
 * ui-textmode.h  ---  Textual interface for mptris.
 *
 * Copyright (C)  2002  Marco Parrone.
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

#ifndef UI_TEXTMODE_H
#define UI_TEXTMODE_H

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif /* HAVE_CONFIG_H */

void
show_licensing_help (void);

void
get_option (char *option);

void
change_level (unsigned int *level);

void
change_auto_display (unsigned int *adsp);

void
show_warranty (void);

void
show_copying (void);

void
show_help (void);

void
reset_game (unsigned int **board);

char
return_char (const unsigned int *board,
	     const unsigned int entry);

void
print_board(const unsigned int *board);

void
print_board_map (void);

void
main_loop (unsigned int **board,
	   unsigned int level,
	   unsigned int autodisplay);

void
main_loop_helper (unsigned int **board,
		  const unsigned int level,
		  const unsigned int position);

unsigned int
insert_in_board (unsigned int **board,
		 const unsigned int position);

void
insert_in_board_cpu (unsigned int **board,
		     const unsigned int level);

void
end_game_if_needed (unsigned int **board);

int
main(int argc,
     char **argv);

#endif /* ! UI_TEXTMODE_H */
