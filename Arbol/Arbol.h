struct Arbol
{
  int dato;
  struct Arbol *izq;
  struct Arbol *der;
};

struct Arbol *AgregarElemento (struct Arbol *, int dato);
struct Arbol *EliminarElemento (struct Arbol *, int dato);
void BuscarElemento (struct Arbol *, int dato);
void PRE (struct Arbol *);
void IN (struct Arbol *);
void POST (struct Arbol *);

int
EsHoja (struct Arbol *raiz)
{
  return !raiz->izq && !raiz->der;
}

int
Vacio (struct Arbol *raiz)
{
  return raiz == NULL;
}
