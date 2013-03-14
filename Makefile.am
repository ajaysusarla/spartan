ACLOCAL_AMFLAGS = -I m4 --install

CLEANFILES		= *~ gmon.out
MAINTAINERCLEANFILES	= Makefile.in aclocal.m4 configure src/config.h.in \
			build-aux/depcomp build-aux/install-sh  \
			build-aux/missing build-aux/texinfo.tex

SUBDIRS			= src

doc_DATA		= AUTHORS COPYING ChangeLog NEWS README

EXTRA_DIST		= $(doc_DATA)

dist-hook:
	chmod -R go-w $(distdir)

.PHONY: dist-hook
