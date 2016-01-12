# Checks for less

AC_DEFUN(M0_PROG_LESS,
[AC_PATH_PROG([LESS], [less], [not_found], [$PATH])
 if test $LESS = not_found ; then
   AC_MSG_ERROR([Cannot find needed program less; exiting.], [1])
 fi
])
