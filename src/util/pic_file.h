/* ASE - Allegro Sprite Editor
 * Copyright (C) 2001-2008  David A. Capello
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef UTIL_PIC_FILE_H
#define UTIL_PIC_FILE_H

#include <allegro/color.h>

struct Image;

struct Image *load_pic_file(const char *filename, int *x, int *y,
			    struct RGB *palette);

int save_pic_file(const char *filename, int x, int y,
		  struct RGB *palette, struct Image *image);

#endif /* UTIL_PIC_FILE_H */
