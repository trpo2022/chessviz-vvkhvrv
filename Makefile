INCLUDEPATHHH=-I thirdparty
CC=gcc 
O=-o
CFLAGS=-Wall -Werror -c
SOURCE=src/chessviz/
LIBSOURCE=src/lib/
INCLUDEPATHH=-I obj
INCLUDEPATH=-I src
all: bin/chessviz clean
bin/chessviz: obj/src/chessviz/main.o obj/src/lib/lib.a
	$(CC) -o bin/chessviz obj/src/chessviz/main.o obj/src/lib/lib.a 
obj/src/lib/lib.a: obj/src/lib/Vivod_doski.o obj/src/lib/Proverka_vvedennogo.o obj/src/lib/Kon.o obj/src/lib/Korol.o obj/src/lib/Koroleva.o obj/src/lib/Ladya.o obj/src/lib/Peshka.o obj/src/lib/Slon.o obj/src/lib/Dvizenie.o obj/src/lib/Fill_doska_in_begin.o
	ar rcs obj/src/lib/lib.a obj/src/lib/Dvizenie.o obj/src/lib/Proverka_vvedennogo.o obj/src/lib/Vivod_doski.o obj/src/lib/Kon.o obj/src/lib/Korol.o obj/src/lib/Koroleva.o obj/src/lib/Ladya.o obj/src/lib/Peshka.o obj/src/lib/Slon.o obj/src/lib/Fill_doska_in_begin.o
obj/src/chessviz/main.o: 
	$(CC) -o obj/src/chessviz/main.o $(CFLAGS) $(INCLUDEPATH) $(SOURCE)main.c
obj/src/lib/Dvizenie.o: 
	$(CC) -o obj/src/lib/Dvizenie.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Dvizenie.c
obj/src/lib/Fill_doska_in_begin.o:
	$(CC) -o obj/src/lib/Fill_doska_in_begin.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Fill_doska_in_begin.c
obj/src/lib/Proverka_vvedennogo.o:
	$(CC) -o obj/src/lib/Proverka_vvedennogo.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Proverka_vvedennogo.c
obj/src/lib/Vivod_doski.o:
	$(CC) -o obj/src/lib/Vivod_doski.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Vivod_doski.c
obj/src/lib/Kon.o:
	$(CC) -o obj/src/lib/Kon.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Kon.c
obj/src/lib/Korol.o:
	$(CC) -o obj/src/lib/Korol.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Korol.c
obj/src/lib/Koroleva.o:
	$(CC) -o obj/src/lib/Koroleva.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Koroleva.c
obj/src/lib/Ladya.o:
	$(CC) -o obj/src/lib/Ladya.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Ladya.c
obj/src/lib/Peshka.o:
	$(CC) -o obj/src/lib/Peshka.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Peshka.c
obj/src/lib/Slon.o:
	$(CC) -o obj/src/lib/Slon.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Slon.c
test: bin/test 
bin/test: obj/src/test/main.o obj/src/test/test.o obj/src/lib/lib.a
	$(CC) -o bin/test obj/src/test/main.o obj/src/test/test.o obj/src/lib/lib.a -lm
obj/src/test/main.o: 
	$(CC) -o obj/src/test/main.o $(CFLAGS) $(INCLUDEPATHHH) -lm test/main.c
obj/src/test/test.o: 
	$(CC) -o obj/src/test/test.o $(CFLAGS) $(INCLUDEPATHHH) $(INCLUDEPATH) -lm test/test.c
clean:
	rm -rf 
.PHONY: chessviz clean





