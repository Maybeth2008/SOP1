#include "lista.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso del editor: editor <nombre_archivo>\n");
        return 1;
    }
    const char *nombreArchivo=argv[1];
    int fd=open(nombreArchivo,  O_CREAT | O_RDWR , 0644);

    if(fd==-1){
        printf("Error al abrir el archivo");
        return 1;
    }
    
    int size=100000;
    char *palabra=malloc(size);
    int terminador=0;
    char buffer[100000]="";


    while(true){
        // %s guarda cadena de caracteres, hasta encontrar un espacio o salto de línea
        palabra=fgets(palabra, size, stdin);
        //leer un numero por consola
        scanf("%d", &terminador); // %d guarda un entero
        //suma los caracteres de palabra y los acumula en buffer
        strcat(buffer, palabra);
        getchar(); // Limpiar el enter que queda después de leer el número
        if(terminador==2){
            break;
        }
    }
    //lee el texto acumulado en buffer y lo escribe en el archivo
    write(fd, buffer, strlen(buffer));
    
    // Cerrar el archivo
    close(fd);
    free(palabra);
    return 0;
}
