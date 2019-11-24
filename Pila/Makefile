a.out: main.o Pila.o
	gcc main.o Pila.o
main.o: main.c
	gcc -c main.c
Pila.o: Pila.c
	gcc -c Pila.c
run: a.out
	./a.out
clear:
	rm a.out main.o Pila.o 
