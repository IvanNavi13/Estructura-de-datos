// Listas Circulares
#include<stdio.h>
#include <stdlib.h>
#include "ListaCir.h"

struct Lista *
agregarElemento (struct Lista *lista, int dato)
{
  //Agrega elementos al final de la lista
  struct Lista *aux;
  struct Lista *fin;
  struct Lista *nuevo = NULL;
  nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  nuevo->dato = dato;
  nuevo->siguiente = NULL;
  if (lista == NULL)
    {
      lista = nuevo;
      lista->siguiente = lista;
    }
  else
    {
      fin = lista;
      fin = fin->siguiente;
      while (fin->siguiente != lista)
	{
	  fin = fin->siguiente;
	}
      fin->siguiente = nuevo;
      nuevo->siguiente = lista;
    }
  return lista;
}

void
mostrarLista (struct Lista *lista)
{
  struct Lista *aux;
  aux = lista;
  if (aux == NULL)
    {
      printf ("La lista esta vacia...\n");
      return;
    }
  printf ("%d ", aux->dato);
  aux = aux->siguiente;
  while (aux != lista)
    {
      printf ("%d ", aux->dato);
      aux = aux->siguiente;
    }
}

void
mostrarInversa (struct Lista *lista)
{
  struct Lista *aux;
  struct Lista *fin;
  fin = lista;
  fin = fin->siguiente;
  while (fin->siguiente != lista)
    {
      fin = fin->siguiente;
    }
  //Fin ya esta en el final de la lista
  printf ("%d ", fin->dato);
  while (fin != lista)
    {
      aux = lista;
      while (aux->siguiente != fin)
	{
	  aux = aux->siguiente;
	}
      fin = aux;
      printf ("%d ", aux->dato);
    }
}


struct Lista *
eliminarCola (struct Lista *lista)
{
  struct Lista *aux;
  struct Lista *fin;
  fin = lista;
  fin = fin->siguiente;
  while (fin->siguiente != lista)
    {
      fin = fin->siguiente;
    }
  //Fin ya esta en el final de la lista
  aux = lista;
  while (aux->siguiente != fin)
    {
      aux = aux->siguiente;
    }
  //Aux esta una antes del final
  aux->siguiente = lista;
  free (fin);
  return lista;
}

struct Lista *
eliminarCabeza (struct Lista *lista)
{
  struct Lista *aux;
  struct Lista *fin;
  fin = lista;
  fin = fin->siguiente;
  while (fin->siguiente != lista)
    {
      fin = fin->siguiente;
    }
  aux = lista;
  lista = lista->siguiente;
  fin->siguiente = lista;
  free (aux);
  return lista;
}



