
Wymagania.
===============
Aby zbudowa� jabber-gg-transport potrzeba:

	- glib (http://www.gtk.org/)
		Przetestowane z glib-1.2.10
	
	- libgg (cz�� EKG, http://dev.null.pl/ekg/)
		Prawdopodobnie potrzebny b�dzie snapshot z CVS


Kompilacja
==============
Prosta jak w przypadku wi�kszo�ci projekt�w OS:

	./configure
	make

Mo�na u�y� opcji configure "--sysconfdir=", aby ustawi� katalog z plikiem konfiguracyjnym,
lub "--enable-debug", aby w��czy� troch� kodu "odpluskwiaj�cego".
