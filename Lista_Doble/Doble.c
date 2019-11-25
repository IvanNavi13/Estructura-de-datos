/* Listas Doblemente Ligadas */
#include <stdio.h>
#include <stdlib.h>
#include "Doble.h"



struct Lista *
agregarElemento (struct Lista *lista, int dato)
{
  //Agrega elementos al final de la lista
  struct Lista *aux;
  struct Lista *nuevo = NULL;
  nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  nuevo->dato = dato;
  nuevo->siguiente = NULL;

  if (lista == NULL)
    {
      nuevo->anterior = NULL;
      lista = nuevo;
    }

  else
    {
      aux = lista;
      while (aux->siguiente != NULL)
	{
	  aux = aux->siguiente;
	}
      aux->siguiente = nuevo;
      nuevo->anterior = aux;
    }
  return lista;
}


void
mostrarLista (struct Lista *lista)
{
  while (lista != NULL)
    {
      printf ("%d ", lista->dato);
      lista = lista->siguiente;
    }
}


void
mostrarInversa (struct Lista *lista)
{
  struct Lista *aux = NULL;
  aux = lista;
  while (aux->siguiente != NULL)
    {
      aux = aux->siguiente;
    }
  while (aux != NULL)
    {
      printf ("%d ", aux->dato);
      aux = aux->anterior;
    }
}


struct Lista *
eliminarCola (struct Lista *lista)
{

  struct Lista *aux = NULL;
  struct Lista *aux2 = NULL;
  struct Lista *aux3 = NULL;
  aux3 = lista;
  aux2 = lista;
  aux = lista;
  while (aux->siguiente != NULL)

    {
      aux = aux->siguiente;
    }

  while (aux2->siguiente != aux)

    {
      aux2 = aux2->siguiente;
    }

  while (aux3->siguiente != aux2)

    {
      aux3 = aux3->siguiente;
    }

  aux2->siguiente = NULL;
  aux2->anterior = aux3;
  aux3->siguiente = aux2;

  free (aux);

  return lista;
}


struct Lista *
eliminarCabeza (struct Lista *lista)
{

  struct Lista *aux = NULL;
  aux = lista;
  lista = lista->siguiente;
  lista->anterior = NULL;
  free (aux);
  return lista;
}
