//Lista simple
#include <stdio.h>
#include "ListaSimple.h"
#include <stdlib.h>

void mostrar(struct Lista *lista)
{
	while (lista != NULL){
		printf("%d -> ", lista->dato);
		lista=lista->sig;
	}
	printf("\n");
}
struct Lista* 
insertar (struct Lista *lista, int dato)
{
	struct Lista *nuevo = NULL;
	nuevo = (struct Lista *) malloc (sizeof (struct Lista));
	if (nuevo == NULL) {
		return NULL;
	}
	nuevo->dato= dato;
	nuevo->sig= lista;
	
	return nuevo;
}




