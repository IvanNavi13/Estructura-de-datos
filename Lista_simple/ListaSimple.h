//Lista simple

struct Lista {
 int dato;
 struct Lista* sig; //Apunta a Siguiente 	
};

void mostrar(struct Lista *lista);

struct Lista* 
insertar (struct Lista *lista, int dato);
