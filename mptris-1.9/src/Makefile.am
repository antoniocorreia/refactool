## Process this file with automake to produce Makefile.in

bin_PROGRAMS = mptris

mptris_SOURCES = tris.c tris.h cmdline.c cmdline.h ui-textmode.c ui-textmode.h

INCLUDES = -Wall -DLOCALEDIR=\"$(datadir)/locale\" -D_\(a\)=gettext\(a\) -DDATADIR=\"$(pkgdatadir)\" -D_GNU_SOURCE
EXTRA_DIST = mptris.ggo ChangeLog
