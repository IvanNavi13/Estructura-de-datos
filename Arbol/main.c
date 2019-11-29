#include <stdio.h>
#include "Arbol.h"
int
main (void)
{
  struct Arbol *arbol = NULL;
  arbol = AgregarElemento (arbol, 12);
  arbol = AgregarElemento (arbol, 6);
  arbol = AgregarElemento (arbol, 46);
  arbol = AgregarElemento (arbol, 100000);
  arbol = AgregarElemento (arbol, 1);
  arbol = AgregarElemento (arbol, 62);
  arbol = AgregarElemento (arbol, 235);
  arbol = AgregarElemento (arbol, 500);
  arbol = AgregarElemento (arbol, 13);
  arbol = AgregarElemento (arbol, 2);
  IN (arbol);

  BuscarElemento (arbol, 62);

  EliminarElemento (arbol, 46);
  IN (arbol);

  printf ("\n");
  return 0;
}
