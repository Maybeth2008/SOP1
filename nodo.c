#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nodo.h"

Nodo *crearNodo(char *texto) {

    // reservar memoria para un nuevo nodo
    Nodo *nuevo = malloc(sizeof(Nodo)); 
 
    // si no hay memoria disponible, retornar NULL
    if (nuevo == NULL) {
        return NULL;
    }

    // reservar memoria para el texto del nodo
    nuevo->texto = malloc(strlen(texto) + 1);

    // si no hay memoria disponible para el texto, liberar el nodo y retornar NULL
    if (nuevo->texto == NULL) {
        free(nuevo);
        return NULL;
    }

    // copiar el texto al nodo
    strcpy(nuevo->texto, texto);

    nuevo->enlace = NULL;

    return nuevo;
}