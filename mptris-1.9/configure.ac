# Process this file with autoconf to produce a configure script.
AC_INIT(mptris, 1.9, marc0@autistici.org)
AM_INIT_AUTOMAKE(mptris, 1.9)
AC_CONFIG_SRCDIR(src/tris.c)
AM_CONFIG_HEADER(config.h)

m4_include([strdup.m4])
m4_include([less.m4])

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
M0_PROG_LESS

# Checks for libraries.

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h stdio.h malloc.h errno.h error.h ctype.h string.h time.h libintl.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST

# Checks for library functions.
AC_FUNC_ALLOCA
AC_FUNC_ERROR_AT_LINE
M0_FUNC_STRDUP

# Gettext configuration.
ALL_LINGUAS="it"
AM_GNU_GETTEXT

AC_CONFIG_FILES([Makefile intl/Makefile po/Makefile.in src/Makefile man/Makefile])
AC_OUTPUT
