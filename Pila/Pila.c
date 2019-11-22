// Pila
#include <stdio.h>
#include <stdlib.h>
#include "Pila.h"

struct Pila *
Push (struct Pila *pila, int dato)
{
  struct Pila *nuevo = NULL;
  nuevo = (struct Pila *) malloc (sizeof (struct Pila));
  nuevo->dato = dato;
  nuevo->sig = pila;
  return nuevo;
}

struct Pila * 
Pop (struct Pila *pila)
{
  struct Pila *aux = pila;
  printf ("%d ", aux->dato);
  pila = pila->sig;
  free (aux);
  return pila;
}

