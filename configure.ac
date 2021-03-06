#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

m4_define([LIBGGRAPH_MAJOR_VERSION], [0])
m4_define([LIBGGRAPH_MINOR_VERSION], [0])
m4_define([LIBGGRAPH_MICRO_VERSION], [1])
m4_define([LIBGGRAPH_RELEASE], [LIBGGRAPH_MAJOR_VERSION.LIBGGRAPH_MINOR_VERSION])
m4_define([LIBGGRAPH_VERSION], [LIBGGRAPH_RELEASE.LIBGGRAPH_MICRO_VERSION])
m4_define([LIBGGRAPH_API_MAJOR_VERSION], [1])
m4_define([LIBGGRAPH_API_MINOR_VERSION], [0])
m4_define([LIBGGRAPH_API_VERSION], [LIBGGRAPH_API_MAJOR_VERSION.LIBGGRAPH_API_MINOR_VERSION])
m4_define([LIBGGRAPH_SO_CURRENT], [1])
m4_define([LIBGGRAPH_SO_REVISION], [0])
m4_define([LIBGGRAPH_SO_AGE], [0])
m4_define([LIBGGRAPH_SO_VERSION], [LIBGGRAPH_SO_CURRENT:LIBGGRAPH_SO_REVISION:LIBGGRAPH_SO_AGE])
m4_define([LIBGGRAPH_NAME_NO_LIB], [ggraph])
m4_define([LIBGGRAPH_NAME], [lib[]LIBGGRAPH_NAME_NO_LIB])
m4_define([LIBGGRAPH_LIBNAME], [LIBGGRAPH_NAME-LIBGGRAPH_API_VERSION])
m4_define([LIBGGRAPH_MAINTAINER_MAIL], [qdlacz@gmail.com])

AC_PREREQ([2.63])
AC_INIT(LIBGGRAPH_NAME, LIBGGRAPH_VERSION, LIBGGRAPH_MAINTAINER_MAIL)
AC_CONFIG_SRCDIR([gsgraph/gsgraph.h])
AC_CONFIG_AUX_DIR([build])
AC_CONFIG_MACRO_DIR([build])
AC_CONFIG_HEADERS([build/config.h])

libggraph_major_version=LIBGGRAPH_MAJOR_VERSION
libggraph_minor_version=LIBGGRAPH_MINOR_VERSION
libggraph_micro_version=LIBGGRAPH_MICRO_VERSION
libggraph_release=LIBGGRAPH_RELEASE
libggraph_version=LIBGGRAPH_VERSION
libggraph_api_major_version=LIBGGRAPH_API_MAJOR_VERSION
libggraph_api_minor_version=LIBGGRAPH_API_MINOR_VERSION
libggraph_api_version=LIBGGRAPH_API_VERSION
libggraph_so_current=LIBGGRAPH_SO_CURRENT
libggraph_so_revision=LIBGGRAPH_SO_REVISION
libggraph_so_age=LIBGGRAPH_SO_AGE
libggraph_so_version=LIBGGRAPH_SO_VERSION
libggraph_name_no_lib=LIBGGRAPH_NAME_NO_LIB
libggraph_name=LIBGGRAPH_NAME
libggraph_libname=LIBGGRAPH_LIBNAME
libggraph_maintainer_mail=LIBGGRAPH_MAINTAINER_MAIL

AC_SUBST([libggraph_major_version])
AC_SUBST([libggraph_minor_version])
AC_SUBST([libggraph_micro_version])
AC_SUBST([libggraph_release])
AC_SUBST([libggraph_version])
AC_SUBST([libggraph_api_major_version])
AC_SUBST([libggraph_api_minor_version])
AC_SUBST([libggraph_api_version])
AC_SUBST([libggraph_so_current])
AC_SUBST([libggraph_so_revision])
AC_SUBST([libggraph_so_age])
AC_SUBST([libggraph_so_version])
AC_SUBST([libggraph_name_no_lib])
AC_SUBST([libggraph_name])
AC_SUBST([libggraph_libname])
AC_SUBST([libggraph_maintainer_mail])

AM_INIT_AUTOMAKE
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

AM_PROG_CC_C_O
LT_INIT
AC_CHECK_PROGS(PERL, perl5 perl)
GTK_DOC_CHECK([1.9])

PKG_CHECK_MODULES([glib], [glib-2.0 >= 2.10])
PKG_CHECK_MODULES([gobject], [gobject-2.0 >= 2.10])
AC_SUBST(glib_CFLAGS)
AC_SUBST(glib_LIBS)
AC_SUBST(gobject_CFLAGS)
AC_SUBST(gobject_LIBS)

AC_LANG([C])
MMSA_ARG_ENABLE_WARNINGS([libggraph_WFLAGS],
                         [-Wall],
                         [-pedantic -Wall -Wextra],
                         [G])

AC_CONFIG_FILES([Makefile

                 gsgraph/Makefile

                 pc/Makefile
                 pc/gsgraph-${libggraph_api_version}.pc:pc/gsgraph.pc.in

                 docs/Makefile
                 docs/reference/Makefile
                 docs/reference/libggraph-docs.sgml

                 examples/Makefile
                 examples/sgraph_traversing/Makefile
                 examples/sgraph_subgraphs/Makefile
                 examples/sgraph_construct/Makefile])
AC_OUTPUT
