#include <stdio.h>
#include <stdlib.h>

#ifndef NODO_H
#define NODO_H

// crear tipo de dato Nodo
typedef struct Nodo {
    char *texto;
    struct Nodo *enlace;
} Nodo;

struct Nodo *crearNodo( char *texto);
char *getTexto(struct Nodo *nodo);

#endif