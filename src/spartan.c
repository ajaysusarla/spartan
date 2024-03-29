/* spartan
 * Copyright (C) 2012 Parthasarathi Susarla <ajaysusarla@gmail.com>
 *
 * spartan is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * ratpoison is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA
 */

#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xatom.h>
#include <X11/Xproto.h>
#include <X11/cursorfont.h>


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <getopt.h>
#include <ctype.h>

#include <sys/wait.h>

#include "spartan.h"


int main (int argc, char **argv)
{
	char *display = NULL;
	Display *dpy;

	setlocale (LC_CTYPE, "");
	if (XSupportsLocale ()) {
		if (!XSetLocaleModifiers (""))
			fprintf (stderr, "Failed to set X locale modifiers\n");
	}

	if (!(dpy = XOpenDisplay (display))) {
		fprintf (stderr, "Can't open display");
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
