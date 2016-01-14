# Checks for strdup
AC_DEFUN(M0_FUNC_STRDUP,
[
AC_CACHE_CHECK([for strdup], HAVE_STRDUP,
 [AC_TRY_LINK([], [strdup("ciao");],
   HAVE_STRDUP=yes,
   HAVE_STRDUP=no)])
if test $HAVE_STRDUP = yes; then
  AC_DEFINE(HAVE_STRDUP, 1, [Define to 1 if you have strdup in string.h])
fi
])
