# Makefile.am for "src/gtk" directory
# This file is part of Claws Mail package.
# See COPYING file for license details.

PLUGINDIR = $(pkglibdir)/plugins/
DOCDIR = $(docdir)

noinst_LTLIBRARIES = libclawsgtk.la

EXTRA_DIST = \
	claws-marshal.list

if GTK2
gtk2_sources = \
	gtkcmoptionmenu.c
endif

libclawsgtk_la_SOURCES = \
	about.c \
	colorlabel.c \
	colorsel.c \
	combobox.c \
	description_window.c \
	filesel.c \
	foldersort.c \
	gtkaspell.c \
	gtkcmctree.c \
	gtkcmclist.c \
	gtksctree.c \
	gtkunit.c \
	$(gtk2_sources) \
	gtkshruler.c \
	gtkutils.c \
	gtkvscrollbutton.c \
	icon_legend.c \
	inputdialog.c \
	logwindow.c \
	manage_window.c \
	menu.c \
	pluginwindow.c \
	prefswindow.c \
	progressdialog.c \
	quicksearch.c \
	spell_entry.c \
	sslcertwindow.c \
	claws-marshal.c

clawsgtkincludedir = $(pkgincludedir)/gtk
clawsgtkinclude_HEADERS = \
	about.h \
	authors.h \
	colorlabel.h \
	colorsel.h \
	combobox.h \
	description_window.h \
	filesel.h \
	foldersort.h \
	gtkaspell.h \
	gtkutils.h \
	gtkunit.h \
	gtkvscrollbutton.h \
	headers.h \
	icon_legend.h \
	inputdialog.h \
	logwindow.h \
	manage_window.h \
	menu.h \
	pluginwindow.h \
	prefswindow.h \
	progressdialog.h \
	quicksearch.h \
	spell_entry.h \
	sslcertwindow.h \
	claws-marshal.h \
	gtkcmctree.h \
	gtkcmclist.h \
	gtkcmoptionmenu.h \
	gtksctree.h \
	gtkshruler.h \
	gdkkeysyms-new.h

AM_CPPFLAGS = \
	-I$(srcdir)/../common \
	-I../common \
	-I$(srcdir)/.. \
	-I$(builddir)/.. \
	$(GTK_CFLAGS) \
	$(ENCHANT_CFLAGS) \
	-DPLUGINDIR=\"$(PLUGINDIR)\" \
	-DDOCDIR=\"$(DOCDIR)\" 

libclawsgtk_la_LIBADD = \
	../common/libclawscommon.la \
	$(GTK_LIBS) \
	$(ENCHANT_LIBS)

BUILT_SOURCES=claws-marshal.c claws-marshal.h 

claws-marshal.h: claws-marshal.list
	$(GLIB_GENMARSHAL) $< --header --prefix=claws_marshal > $@

claws-marshal.c: claws-marshal.list
	$(GLIB_GENMARSHAL) $< --body --prefix=claws_marshal > $@
