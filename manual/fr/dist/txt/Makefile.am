# Makefile.am for "manual/fr/dist/txt" directory
# This file is part of Claws Mail package.
# See COPYING file for license details.

if MANUAL_TXT
EXTRA_DIST=claws-mail-manual.txt
manualde_DATA=claws-mail-manual.txt
manualdedir=$(manualdir)/fr

claws-mail-manual.txt: \
	../../account.xml \
	../../ack.xml \
	../../addrbook.xml \
	../../advanced.xml \
	../../faq.xml \
	../../glossary.xml \
	../../gpl.xml \
	../../handling.xml \
	../../intro.xml \
	../../keyboard.xml \
	../../plugins.xml \
	../../starting.xml \
	../../claws-mail-manual.xml 
	-docbook2txt -o . ../../claws-mail-manual.xml
	
maintainer-clean:
	-rm claws-mail-manual.txt
endif
