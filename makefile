### MAKEFILE ###

main: main.o matriz.o lista.o
	gcc main.o matriz.o lista.o -o main

main.o: main.c
	gcc -c main.c

lista.o: lista.c lista.h
	gcc -c lista.c

matriz.o: matriz.c matriz.h
	gcc -c matriz.c

clean:
	rm *.o
