a.out: main.o Lista_Simple.o
	gcc main.o Lista_Simple.o
main.o: main.c
	gcc -c main.c
Lista_Simple.o: Lista_Simple.c
	gcc -c Lista_Simple.c
run: a.out
	./a.out
clear:
	rm a.out main.o Lista_Simple.o 

