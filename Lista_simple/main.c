#include "ListaSimple.h"

int main(void){
struct Lista *lista;	

  lista = insertar (lista, 5); //Inserte dato 5
  lista = insertar (lista, 10);
  lista = insertar (lista, 100);
  lista = insertar (lista, 50);
  lista = insertar (lista, 13);
  lista = insertar (lista, 1);
  lista = insertar (lista, 999999);
  lista = insertar (lista, 10000);
  lista = insertar (lista, 505);
  mostrar(lista);
 	
return 0;	
}


