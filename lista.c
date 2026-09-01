#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

// Inicializar la lista 
int crearLista(struct Lista *lista){
    lista->primero = NULL;
    return 0;
};
// insertar elementos al final del texto 
void insertarUltimo(struct Lista *lista, char *entrada){
    Nodo *nuevo = crearNodo(entrada);
    if (nuevo == NULL) {
        printf("Error al crear un nuevo nodo.\n");
        return;
    }

    if (lista->primero == NULL) {
        lista->primero = nuevo;
    } else {
        Nodo *actual = lista->primero;
        while (actual->enlace != NULL) {
            actual = actual->enlace;
        }
        actual->enlace = nuevo;
    }
};

/* 
void insertarLista( struct Lista *lista, char entrada){

};

// En C no podemos tener dos funciones con el mismo nombre 
void insertarDespues(struct Lista *lista, Nodo *anterior, char entrada){
    
};


// Buscar 
Nodo *buscarLista(struct Lista *lista, char destino){

};


// Eliminar 
void eliminar(struct Lista *lista, char entrada){

};
*/

// Obtener último nodo 
Nodo *getUltimo(struct Lista *lista){
    if (lista->primero == NULL) {
        return NULL;
    }
    Nodo *actual = lista->primero;
    while (actual->enlace != NULL) {
        actual = actual->enlace;
    }
    return actual;
};


// Mostrar lista
void visualizar(struct Lista *lista){
    Nodo *actual = lista->primero;
    while (actual != NULL) {
        printf("%s ", actual->texto);
        actual = actual->enlace;
    }
    printf("\n");
};

