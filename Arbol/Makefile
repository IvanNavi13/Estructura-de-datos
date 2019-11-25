a.out: main.o Arbol.o
	gcc main.o Arbol.o
main.o: main.c
	gcc -c main.c
Arbol.o: Arbol.c
	gcc -c Arbol.c
run: a.out
	./a.out
clear:
	rm a.out main.o Arbol.o 



