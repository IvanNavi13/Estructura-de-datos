#include<stdio.h>
#include "ListaCir.h"
int
main (void)
{
  struct Lista *lista1 = NULL;
  int max, numero;
  //Ingresa el numero total de nodos en la lista
  printf("Ingresa el numero de datos: ");
  scanf ("%d", &max);
  for (int i = 0; i < max; i++)
    {
      scanf ("%d", &numero);
      lista1 = agregarElemento (lista1, numero);
    }

  mostrarLista (lista1);
  printf ("\n");
  mostrarInversa (lista1);
  printf ("\n\n");
  return 0;
}


