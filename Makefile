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
obj/src/libchessviz/libchessviz.a: obj/src/libchessviz/Dvizenie.o obj/src/libchessviz/Fill_doska_in_begin.o obj/src/libchessviz/Proverka_vvedennogo.o obj/src/libchessviz/Vivod_doski.o obj/src/libchessviz/Vzatie.o
	ar rcs obj/src/libchessviz/libchessviz.a obj/src/libchessviz/Dvizenie.o obj/src/libchessviz/Fill_doska_in_begin.o obj/src/libchessviz/Proverka_vvedennogo.o obj/src/libchessviz/Vivod_doski.o obj/src/libchessviz/Vzatie.o
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
obj/src/libchessviz/Vzatie.o:
	$(CC) -o obj/src/libchessviz/Vzatie.o $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Vzatie.c
clean:
	rm -rf 
.PHONY: chessviz clean





