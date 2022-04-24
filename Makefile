CC=gcc 
O=-o
CFLAGS=-Wall -Werror -c
SOURCE=src/chessviz/
LIBSOURCE=src/libchessviz/
INCLUDEPATHH=-I obj
INCLUDEPATH=-I src
all: bin/chessviz clean
bin/chessviz: obj/src/chessviz/main.o obj/src/libchessviz/libchessviz.a
	$(CC) -o bin/chessviz obj/src/chessviz/main.o obj/src/libchessviz/libchessviz.a 
obj/src/libchessviz/libchessviz.a: obj/src/libchessviz/Vivod_doski.o obj/src/libchessviz/Proverka_vvedennogo.o obj/src/libchessviz/Kon.o obj/src/libchessviz/Korol.o obj/src/libchessviz/Koroleva.o obj/src/libchessviz/Ladya.o obj/src/libchessviz/Peshka.o obj/src/libchessviz/Slon.o obj/src/libchessviz/Dvizenie.o obj/src/libchessviz/Fill_doska_in_begin.o
	ar rcs obj/src/libchessviz/libchessviz.a obj/src/libchessviz/Dvizenie.o obj/src/libchessviz/Proverka_vvedennogo.o obj/src/libchessviz/Vivod_doski.o obj/src/libchessviz/Kon.o obj/src/libchessviz/Korol.o obj/src/libchessviz/Koroleva.o obj/src/libchessviz/Ladya.o obj/src/libchessviz/Peshka.o obj/src/libchessviz/Slon.o obj/src/libchessviz/Fill_doska_in_begin.o
obj/src/chessviz/main.o: 
	$(CC) -o obj/src/chessviz/main.o $(CFLAGS) $(INCLUDEPATH) $(SOURCE)main.c
obj/src/libchessviz/Dvizenie.o: 
	$(CC) -o obj/src/libchessviz/Dvizenie.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Dvizenie.c
obj/src/libchessviz/Fill_doska_in_begin.o:
	$(CC) -o obj/src/libchessviz/Fill_doska_in_begin.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Fill_doska_in_begin.c
obj/src/libchessviz/Proverka_vvedennogo.o:
	$(CC) -o obj/src/libchessviz/Proverka_vvedennogo.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Proverka_vvedennogo.c
obj/src/libchessviz/Vivod_doski.o:
	$(CC) -o obj/src/libchessviz/Vivod_doski.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Vivod_doski.c
obj/src/libchessviz/Kon.o:
	$(CC) -o obj/src/libchessviz/Kon.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Kon.c
obj/src/libchessviz/Korol.o:
	$(CC) -o obj/src/libchessviz/Korol.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Korol.c
obj/src/libchessviz/Koroleva.o:
	$(CC) -o obj/src/libchessviz/Koroleva.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Koroleva.c
obj/src/libchessviz/Ladya.o:
	$(CC) -o obj/src/libchessviz/Ladya.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Ladya.c
obj/src/libchessviz/Peshka.o:
	$(CC) -o obj/src/libchessviz/Peshka.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Peshka.c
obj/src/libchessviz/Slon.o:
	$(CC) -o obj/src/libchessviz/Slon.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Slon.c

clean:
	rm -rf 
.PHONY: chessviz clean





