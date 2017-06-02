#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ARBOLES.h"
#include "LISTAS.h"

void menuProyecto();/**FUNCION MENU PRINCIPAL PROYECTO FINAL**/
void menuListas();/**FUNCION MENU LISTAS**/
void menuColas();/**FUNCION MENU COLAS**/
void menuPilas();/**FUNCION MENU PILAS**/
void menuArboles();/**FUNCION MENU ARBOLES**/

/**FUNCION PROGRAMA PRINCIPAL**/

int main ( int argc, char **argv ){

 	FILE *documento;
 	char elemento;
 	int i = 0, n;
 	srand(time(NULL));
 	documento = fopen ( "Archivo_1Millon.txt", "w" );
    if(documento == NULL){
        printf("\nSe produjo error al crear el documento...\n\n");
    }else{

        printf("\nSe esta generando el Millon de datos... \n\n\n ");
        system("pause");

        while(i < 1000000){
            n = (rand() % (1999998 + 1)) - 999999;
            fputc(n, documento);
            printf(" <%d> ", n);
            i++;
        }
        fclose (documento);

        printf("\n\n");
        system("pause");

        printf("\n\nAhora vamos a abrir el archivo...\n\n");
        fopen ( "Archivo_1Millon.txt", "r" );
            if(documento == NULL){
            printf("El archivo no existe");
        }else{
            while((n = fgetc(documento)) != EOF){
                //fscanf(documento, "%d" ,n);
                printf(" <%d> ", n);
            }
        }
        fclose(documento);
}
    printf("\n\n");
 	system("pause");
 	return 0;
}





