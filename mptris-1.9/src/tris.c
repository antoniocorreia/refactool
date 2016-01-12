/*
 * tris.c  ---  Implementation of tris.h.
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

#include <stdlib.h>
#include <time.h>
#include "tris.h"

void
tris_init (void)
{
  srand ((long) time (NULL));
}

unsigned int
check_end (const unsigned int *b)
{
  /*
   * Checks for player winning.
   */
  if((b[1] == b[2] && b[1] == b[3] && b[3] == 2)
     || (b[4] == b[5] && b[4] == b[6] && b[6] == 2)
     || (b[7] == b[8] && b[7] == b[9] && b[9] == 2)
     || (b[1] == b[4] && b[4] == b[7] && b[7] == 2)
     || (b[2] == b[5] && b[5] == b[8] && b[8] == 2)
     || (b[3] == b[6] && b[6] == b[9] && b[9] == 2)
     || (b[1] == b[5] && b[5] == b[9] && b[9] == 2)
     || (b[7] == b[5] && b[5] == b[3] && b[3] == 2))
    return 1;

  /*
   * Checks for player losing.
   */
  else if((b[1] == b[2] && b[1] == b[3] && b[3] == 1)
	  || (b[4] == b[5] && b[4] == b[6] && b[6] == 1)
	  || (b[7] == b[8] && b[7] == b[9] && b[9] == 1)
	  || (b[1] == b[4] && b[4] == b[7] && b[7] == 1)
	  || (b[2] == b[5] && b[5] == b[8] && b[8] == 1)
	  || (b[3] == b[6] && b[6] == b[9] && b[9] == 1)
	  || (b[1] == b[5] && b[5] == b[9] && b[9] == 1)
	  || (b[7] == b[5] && b[5] == b[3] && b[3] == 1))
    return 2;

  /*
   * Checks for draw.
   */
  else if(b[1] != 0 && b[2] != 0 && b[3] != 0 && b[4] != 0 && b[5] != 0
	  && b[6] != 0 && b[7] != 0 && b[8] != 0 && b[9] != 0)
    return 3;

  /*
   * Nothing happened.
   */
  return 0;
}

unsigned int
get_best (const unsigned int *b)
{
  if(b[3] == b[1] && b[1] == 1 && b[2] == 0)
    return 2;
  else if(b[9] == b[1] && b[1] == 1 && b[5] == 0)
    return 5;
  else if(b[7] == b[1] && b[1] == 1 && b[4] == 0)
    return 4;
  else if(b[2] == b[1] && b[1] == 1 && b[3] == 0)
    return 3;
  else if(b[5] == b[1] && b[1] == 1 && b[9] == 0)
    return 9;
  else if(b[4] == b[1] && b[1] == 1 && b[7] == 0)
    return 7;
  else if(b[8] == b[2] && b[2] == 1 && b[5] == 0)
    return 5;
  else if(b[3] == b[2] && b[2] == 1 && b[1] == 0)
    return 1;
  else if(b[7] == b[3] && b[3] == 1 && b[5] == 0)
    return 5;
  else if(b[5] == b[3] && b[3] == 1 && b[7] == 0)
    return 7;
  else if(b[9] == b[3] && b[3] == 1 && b[6] == 0)
    return 6;
  else if(b[6] == b[3] && b[3] == 1 && b[9] == 0)
    return 9;
  else if(b[7] == b[4] && b[4] == 1 && b[1] == 0)
    return 1;
  else if(b[5] == b[4] && b[4] == 1 && b[6] == 0)
    return 6;
  else if(b[6] == b[4] && b[4] == 1 && b[5] == 0)
    return 5;
  else if(b[2] == b[5] && b[5] == 1 && b[8] == 0)
    return 8;
  else if(b[6] == b[5] && b[5] == 1 && b[4] == 0)
    return 4;
  else if(b[7] == b[5] && b[5] == 1 && b[3] == 0)
    return 3;
  else if(b[8] == b[5] && b[5] == 1 && b[2] == 0)
    return 2;
  else if(b[9] == b[5] && b[5] == 1 && b[1] == 0)
    return 1;
  else if(b[9] == b[6] && b[6] == 1 && b[3] == 0)
    return 3;
  else if(b[8] == b[7] && b[7] == 1 && b[9] == 0)
    return 9;
  else if(b[9] == b[7] && b[7] == 1 && b[8] == 0)
    return 8;
  else if(b[9] == b[8] && b[8] == 1 && b[7] == 0)
    return 7;
  else if(b[3] == b[1] && b[1] == 2 && b[2] == 0)
    return 2;
  else if(b[9] == b[1] && b[1] == 2 && b[5] == 0)
    return 5;
  else if(b[7] == b[1] && b[1] == 2 && b[4] == 0)
    return 4;
  else if(b[2] == b[1] && b[1] == 2 && b[3] == 0)
    return 3;
  else if(b[5] == b[1] && b[1] == 2 && b[9] == 0)
    return 9;
  else if(b[4] == b[1] && b[1] == 2 && b[7] == 0)
    return 7;
  else if(b[8] == b[2] && b[2] == 2 && b[5] == 0)
    return 5;
  else if(b[3] == b[2] && b[2] == 2 && b[1] == 0)
    return 1;
  else if(b[7] == b[3] && b[3] == 2 && b[5] == 0)
    return 5;
  else if(b[5] == b[3] && b[3] == 2 && b[7] == 0)
    return 7;
  else if(b[9] == b[3] && b[3] == 2 && b[6] == 0)
    return 6;
  else if(b[6] == b[3] && b[3] == 2 && b[9] == 0)
    return 9;
  else if(b[7] == b[4] && b[4] == 2 && b[1] == 0)
    return 1;
  else if(b[5] == b[4] && b[4] == 2 && b[6] == 0)
    return 6;
  else if(b[6] == b[4] && b[4] == 2 && b[5] == 0)
    return 5;
  else if(b[2] == b[5] && b[5] == 2 && b[8] == 0)
    return 8;
  else if(b[6] == b[5] && b[5] == 2 && b[4] == 0)
    return 4;
  else if(b[7] == b[5] && b[5] == 2 && b[3] == 0)
    return 3;
  else if(b[8] == b[5] && b[5] == 2 && b[2] == 0)
      return 2;
  else if(b[9] == b[5] && b[5] == 2 && b[1] == 0)
    return 1;
  else if(b[9] == b[6] && b[6] == 2 && b[3] == 0)
    return 3;
  else if(b[8] == b[7] && b[7] == 2 && b[9] == 0)
    return 9;
  else if(b[9] == b[7] && b[7] == 2 && b[8] == 0)
    return 8;
  else if(b[9] == b[8] && b[8] == 2 && b[7] == 0)
    return 7;
   else if(b[1] == b[9] && b[9] == 2 && b[8] == 1 && b[5] == 0)
     return 5;
  else if(b[1] == 2 && b[2] == b[3] && b[3] == b[4]
	  && b[4] == b[5] && b[5] == b[6] && b[6] == b[7]
	  && b[7] == b[8] && b[8] == b[9] && b[9] == 0)
    return 5;
  else if(b[7] == 2 && b[0] == 1 && b[8] == 0)
    return 8;
  else if(b[7] == b[3] && b[3] == 2 && b[8] == 1 && b[5] == 0)
    return 5;
  else if(b[1] == b[6] && b[6] == 2 && b[5] == 0)
    return 5;
  else if(b[4] == b[2] && b[2] == 2 && b[1] == 1 && b[5] == 0)
    return 5;
  else if(b[8] == b[6] && b[6] == 2 && b[1] == 1 && b[4] == 0)
    return 4;
  else if(b[6] == b[2] && b[2] == 2 && b[1] == 1 && b[5] == 0)
    return 5;
  else if(b[8] == b[4] && b[4] == 2 && b[1] == 1 && b[5] == 0)
    return 5;
  else if(b[6] == 2 && b[9] == b[3] && b[3] == b[4]
	  && b[4] == b[5] && b[5] == b[1] && b[1] == b[7]
	  && b[7] == b[8] && b[8] == b[2] && b[2] == 0)
    return 2;
  else if(b[6] == b[1] && b[1] == 2 && b[5] == 1 && b[3] == 0)
    return 3;
  else if(b[6] == b[8] && b[8] == 2 && b[2] == 1 && b[9] == 0)
    return 9;
  else if(b[8] == 2 && b[2] == b[3] && b[3] == b[4]
	  && b[4] == b[5] && b[5] == b[6] && b[6] == b[7]
	  && b[7] == b[1] && b[1] == b[9] && b[9] == 0)
    return 6;
  else if(b[0] == 2 && b[3] == b[4] && b[4] == 2 && b[5] == 0)
    return 5;
  else if(b[0] == 2 && b[7] == b[6] && b[6] == 2 && b[8] == 1 && b[5] == 0)
    return 5;
  else
    return get_random (b);
}

unsigned int
get_random (const unsigned int *b)
{
  unsigned int i;
  unsigned int j;
  unsigned int r = ((double) 8) * rand () / (RAND_MAX + 1.0) + 1.0;

  for (j = 1; j < 9;)
    {
      for (i = 1; i < 10; i ++)
	{
	  if(b[i] == 0)
	    {
	      if (j == r)
		return i;
	      else
		{
		  j++;
		  break;
		}
	    }  
	}
      if (j == 1)
	return 0;
    }
  return 0;
}

unsigned int
get_at_level (const unsigned int *b,
	      const unsigned int l)
{
  double r;

  if (l > 9)
    return 0;

  r = ((double) 8) * rand () / (RAND_MAX + 1.0);
  
  if (r < ((double) l))
    return get_best (b);
  else
    return get_random (b);
}
