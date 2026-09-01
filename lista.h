#include "nodo.h"

// crear tipo de dato Lista
typedef struct Lista {
    Nodo *primero;  
}Lista;

int crearLista(struct Lista *lista);
void insertarUltimo(struct Lista *lista, char *entrada);