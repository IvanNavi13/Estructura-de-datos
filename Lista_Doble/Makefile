a.out: main.o Doble.o
	gcc main.o Doble.o
main.o: main.c
	gcc -c main.c
Doble.o: Doble.c
	gcc -c Doble.c
run: a.out
	./a.out
clear:
	rm a.out main.o Doble.o 

