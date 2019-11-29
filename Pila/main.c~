#include "Pila.h"
#include <stdio.h>
int main (void)
{
  struct Pila *pila = NULL;
  int max, num;
  printf("Ingresa el numero de datos: ");
  scanf ("%d", &max);
  for (int i = 0; i < max; ++i)
    {
      scanf ("%d", &num);
      pila = Push (pila, num);
    }
  printf ("\n\n");
  for (int i = 0; i < max; ++i)
    {
      pila = Pop (pila);
    }
  printf ("\n");
  
  return 0;
} 

