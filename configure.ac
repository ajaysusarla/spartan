dnl spartan


AC_INIT([spartan], [0.1], [ajaysusarla@gmail.com])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([src/spartan.c])
AM_INIT_AUTOMAKE([-Wall -Werror gnu])

AC_CONFIG_HEADER(src/config.h)

AC_PROG_CC

if test "x$CC" = "xgcc"; then
	CFLAGS="-Wall $CFLAGS"
fi

dnl Check for the X libs
AC_PATH_X
AC_PATH_XTRA

if test "x$no_x" = "xyes"; then
	AC_MSG_ERROR([*** Can't find X11 headers and libs])
fi

AC_CHECK_LIB(X11, XOpenDisplay, [X_LIBS="-lX11 $X_LIBS"],
	AC_MSG_ERROR([*** Can't find libX11]),$X_LIBS $X_EXTRA_LIBS)

mysavedCPPFLAGS="$CPPFLAGS"
CPPFLAGS="$CPPFLAGS $X_CFLAGS"
AC_CHECK_HEADERS([X11/extensions/Xinerama.h], [], [], [
#include <X11/Xlib.h>
])
CPPFLAGS="$mysavedCPPFLAGS"

AC_CHECK_LIB(Xext, XMissingExtension, [X_LIBS="-lXext $X_LIBS"],,$X_LIBS $X_EXTRA_LIBS)
AC_CHECK_LIB(Xinerama, XineramaQueryScreens, [X_LIBS="-lXinerama $X_LIBS"; AC_DEFINE(HAVE_LIBXINERAMA,1,[Xinerama])],,$X_LIBS $X_EXTRA_LIBS)
AC_CHECK_LIB(Xtst, XTestFakeButtonEvent, [X_LIBS="-lXtst $X_LIBS"; AC_DEFINE(HAVE_LIBXTST,1,[Xtst])],,$X_LIBS $X_EXTRA_LIBS)

AC_SUBST(X_LIBS)
AC_SUBST(X_EXTRA_LIBS)
AC_SUBST(X_CFLAGS)

dnl Check for electric fence library
dnl AC_CHECK_LIB(efence,malloc,,)

dnl Checks for header files.
AC_HEADER_STDC
AC_HEADER_SYS_WAIT
AC_CHECK_HEADERS(unistd.h stdarg.h)

dnl Checks for typedefs, structures, and compiler characteristics.

dnl Checks for library functions.
AC_CHECK_FUNCS(getline getopt getopt_long setenv setpgid setpgrp setsid)
AC_CHECK_FUNCS(unsetenv usleep vsnprintf)

AM_LANGINFO_CODESET

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT

