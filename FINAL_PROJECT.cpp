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
void llenadoArchivo();/**FUNCION PARA GUARDAR DATOS EN ARCHIVO**/
void leerArchivo();/**FUNCION PARA MOSTRAR DATOS DE ARCHIVO**/
void lecturaArchivo();/**FUNCION PARA ABRIR ARCHIVO EN MODO LECTURA**/
void escrituraArchivo();/**FUNCION PARA ABRIR ARCHIVO EN MODO ESCRITURA**/

/**FUNCION PROGRAMA PRINCIPAL**/

int main ( int argc, char **argv ){



    printf("\n\n");
 	system("pause");
 	return 0;
}
void menuProyecto(){/**FUNCION MENU PRINCIPAL PROYECTO FINAL**/
    int opc;
    do{
        printf("\n\t\t\tMENU PROYECTO FINAL EDII\n\n");
        printf("1). Generar Archivo.\n");
        printf("2). Funciones Cola.\n");
        printf("3). Funciones Pila.\n");
        printf("4). Funciones Lista.\n");
        printf("5). Funciones Arbol.\n");
        printf("0). Salir\n\n");

        printf("Seleccione una opcion: \n\n");
        scanf("%d",&opc);

        switch(opc){
            case 0:
                printf("\nHas Salido del Programa!!!");
                //return 0;
                break;
            case 1:
                llenadoArchivo();
                break;
            case 2:
                menuColas();
                break;
            case 3:
                menuPilas();
                break;
            case 4:
                menuListas();
                break;
            case 5:
                menuArboles();
                break;
            default:
                system("cls");
                printf("\nValor ingresado no valido");
        }
    }while(opc!=0);
}
void lecturaArchivo(){/**FUNCION PARA ABRIR ARCHIVO EN MODO LECTURA**/
    FILE *documento;
 	documento = fopen ( "Archivo_1Millon.txt", "r" );
}
void escrituraArchivo(){/**FUNCION PARA ABRIR ARCHIVO EN MODO ESCRITURA**/
    FILE *documento;
 	documento = fopen ( "Archivo_1Millon.txt", "w" );
}
void llenadoArchivo(){/**FUNCION PARA GUARDAR DATOS EN ARCHIVO**/
    FILE *documento;
 	char elemento;
 	int n, i=0;
 	srand(time(NULL));
 	escrituraArchivo();
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
    }
}
void leerArchivo(){/**FUNCION PARA MOSTRAR DATOS DE ARCHIVO**/
    FILE *documento;
    int n;
    printf("\n\nAhora vamos a abrir el archivo...\n\n");
    lecturaArchivo();
        if(documento == NULL){
        printf("El archivo no existe o no es posible abirlo");
    }else{
        while((n = fgetc(documento)) != EOF){
            fscanf(documento, "%d" ,n);
            printf(" <%d> ", n);
        }
    }
    fclose(documento);
}



