a.out: main.o ListaCir.o
	gcc main.o ListaCir.o
main.o: main.c
	gcc -c main.c
ListaCir.o: ListaCir.c
	gcc -c ListaCir.c
run: a.out
	./a.out
clear:
	rm a.out main.o ListaCir.o 



