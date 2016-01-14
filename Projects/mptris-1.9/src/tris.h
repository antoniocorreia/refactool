/*
 * tris.h  ---  Tris game simulation.
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

#ifndef TRIS_H
#define TRIS_H

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif /* HAVE_CONFIG_H */

/*
 * NOTE: the board is an array of 10 unsigned ints; the first is the
 * game status (finished or not), the others are the status of the 9
 * entries of the board.
 */

/*
 * Inits the libraries utilized by tris.[hc].
 * Actually sets the random seed.
 */
void
tris_init (void);

/*
 * Checks if the game is finished.
 * If the player won then returns 1,
 * if the player losed then returns 2,
 * if the board is full then returns 3 (drawn),
 * else returns 0 (the game is not finished).
 */
unsigned int
check_end (const unsigned int *b /* Board. */);

/*
 * Returns the best entry for the CPU player from the board.
 * Returns 0 if none is empty.
 */
unsigned int
get_best (const unsigned int *b /* Board. */);

/*
 * Selects a random empty entry from the board.
 * Returns 0 if none is empty.
 */
unsigned int
get_random (const unsigned int *b /* Board. */);

/*
 * Selects an entry for the CPU accordling to
 * the chosed level of difficulty.
 * The level must be >= 0 and <= 9.
 * 0 = more easy, 9 = more difficult.
 */
unsigned int
get_at_level (const unsigned int *b /* Board. */,
	      const unsigned int l /* Level. */);

#endif /* ! TRIS_H */
