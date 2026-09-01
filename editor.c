#include "lista.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "comandos.h"

int main(void) {
    char comando[20];
    char nombreArchivo[100];

    printf("Bienvenido al editor de texto\n");
    printf("Ayuda comandos:h\n");
    
    while(true){
        scanf(" %19s", comando);

        // --------- Crear archivo de texto ---------
        if(strcmp(comando,"o")==0){ //strcmp()==0 porque strcmp devuelve 0 si las cadenas son iguales
            char enter= getchar(); 
            if(enter=='\n'){
                printf("Ingrese el nombre del archivo: ");
                scanf("%s", nombreArchivo);
                crearArchivo(nombreArchivo);

            }else{
                scanf("%s", nombreArchivo);
                getchar();
                crearArchivo(nombreArchivo);
            }
        }
        // --------- Salir del editor ---------
        else if(strcmp(comando,"s")==0){
            break;
        }
        // --------- Ayuda comandos ---------
        else if(strcmp(comando,"h")==0){
            printf("Uso del editor: o <nombre_archivo>\n");
            printf("Uso del editor: otra funcion\n");
            printf("Salir: s \n");
        }
        // --------- Comando no reconocido ---------
        else{
            printf("Comando no reconocido. Presiona 'h' para ayuda.\n");
        }  
    }


    return 0;
}
