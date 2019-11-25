struct Lista{
  int dato;
  struct Lista *siguiente;
  struct Lista *anterior;
};

struct Lista *agregarElemento (struct Lista *, int);
void mostrarLista (struct Lista *);	
void mostrarInversa (struct Lista *);	
struct Lista *eliminarCola (struct Lista *);
struct Lista *eliminarCabeza (struct Lista *);




