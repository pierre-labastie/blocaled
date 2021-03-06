/*
  Copyright 2012 Alexandre Rostovtsev

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified in 2019 by Pierre Labastie. See git log
*/

#ifndef B_LOCALED_H
#define B_LOCALED_H

#include <glib.h>
#include <gio/gio.h>

/**
 * SECTION: localed
 * @short_description: where all the interface to D-Bus is done
 * @title: Localed functions
 * @include: localed.h
 *
 * This is where all the work is done:
 * - reading and storing settings
 * - interaction with D-Bus
 * - calling polkit for authorization
 *
 * Only two functions are public: #localed_init to initiate the connection
 * with D-Bus and readd the settings from files, and #localed_destoy, for
 * garbage collection at exit.
 */

void
localed_init (gboolean _read_only,
	      const gchar *kbd_model_map,
	      const gchar *localeconfig,
	      const gchar *keyboardconfig,
	      const gchar *xkbdconfig);

void
localed_destroy (void);

#endif
