#define millon 100000
#include <time.h>

long long int a[millon];
long int n,pos,aux, menor, sure, vBuscado;
long int b=0;
long int i;
char numero[7];
FILE *documento;
char elemento;

void menuProyecto();/**FUNCION MENU PRINCIPAL PROYECTO FINAL**/
void menuListas();/**FUNCION MENU LISTAS**/
void menuColas();/**FUNCION MENU COLAS**/
void menuPilas();/**FUNCION MENU PILAS**/
void menuArboles();/**FUNCION MENU ARBOLES**/
void llenadoArchivo();/**FUNCION PARA GUARDAR DATOS EN ARCHIVO**/
void leerArchivo();/**FUNCION PARA LEER DATOS DEL ARCHIVO**/
void metOrdBurbujaCola();/**FUNCION PARA METODO DE ORDENAMIENTO BURBUJA**/
void metOrdBurbujaLista();/**FUNCION PARA METODO DE ORDENAMIENTO BURBUJA**/
void metOrdBurbujaPila();/**FUNCION PARA METODO DE ORDENAMIENTO BURBUJA PILA**/
void metOrdSeleccionCola();/**FUNCION PARA METODO DE ORDENAMIENTO SELECCION**/
void metOrdSeleccionLista();/**FUNCION PARA METODO DE ORDENAMIENTO SELECCION**/
void metOrdSeleccionPila();/**FUNCION PARA METODO DE ORDENAMIENTO SELECCION**/
void inserArchivoPila();/**FUNCION PARA INSERTAR ARCHIVOS A LA PILA DESDE ARCHIVO**/
void inserArchivoCola();/**FUNCION PARA INSERTAR ARCHIVOS A LA COLA DESDE ARCHIVO**/
void inserArchivoLista();/**FUNCION PARA INSERTAR ARCHIVOS A LA LISTA DESDE ARCHIVO**/
void inserArchivoArbol();/**FUNCION PARA INSERTAR ARCHIVOS AL ARBOL DESDE ARCHIVO**/


void menuProyecto(){/**FUNCION MENU PRINCIPAL PROYECTO FINAL**/
    int opc;
    do{
        system("cls");
        printf("\n\t\t\tMENU PROYECTO FINAL EDII\n\n");
        printf("1). Generar Archivo.\n");
        printf("2). Funciones Cola.\n");
        printf("3). Funciones Pila.\n");
        printf("4). Funciones Lista.\n");
        printf("5). Funciones Arbol.\n");
        printf("6). Mostrar Archivo.\n");
        printf("0). Salir\n");

        printf("Seleccione una opcion: ");
        scanf("%d",&opc);
        printf("\n\n");
        switch(opc){
            case 0:
                printf("\nHas Salido del Programa!!!");
                break;
            case 1:
                llenadoArchivo();
                printf("\n\n");
                break;
            case 2:
                menuColas();
                printf("\n\n");
                break;
            case 3:
                menuPilas();
                printf("\n\n");
                break;
            case 4:
                menuListas();
                printf("\n\n");
                break;
            case 5:
                menuArboles();
                printf("\n\n");
                break;
            case 6:
                leerArchivo();
                printf("\n\n");
                system("pause");
                break;
            default:
                system("pause");
                system("cls");
                printf("\nValor ingresado no valido");
        }
    }while(opc!=0);
}
void menuColas(){/**FUNCION MENU COLAS**/
    int opc;
    do{
        printf("\n\t\t\tMENU COLAS\n\n");
        printf("1). Mostrar la Cola.\n");
        printf("2). Aplicar Metodo de Ordenamiento Burbuja.\n");
        printf("3). Aplicar Metodo de Ordenamiento Seleccion.\n");
        printf("4). Buscar un Valor en la Cola.\n");
        printf("5). Vaciar Cola.\n");
        printf("6). Insertar Datos desde Archivo.\n");
        printf("0). Salir al menu principal\n\n");
        printf("Seleccione una opcion: ");
        scanf("%d",&opc);
        switch(opc){
            case 0:
                system("cls");
                printf("\nHas Salido del Menu Colas!!!");
                system("pause");
                menuProyecto();
                break;
            case 1:
                printf("\n\t\t\tMOSTRAR LA COLA\n\n");
                most_FIFO();
                break;
            case 2:
                system("cls");
                printf("\n\t\t\tMETODO BURBUJA EN COLAS\n\n");
                printf("\nOrdenando...\n\n");
                metOrdBurbujaCola();
                break;
            case 3:
                system("cls");
                printf("\n\t\t\tMETODO INSERCION EN COLAS\n\n");
                printf("\nOrdenando...\n\n");
                metOrdSeleccionCola();
                break;
            case 4:
                system("cls");
                printf("\n\t\t\tBUSCAR EN COLAS\n\n");
                buscar_FIFO();
                break;
            case 5:
                printf("\n\t\tVACIAR COLAS\n\n");
                printf("Desea vaciar la Cola realmente? <1> Si - <0>No: ");
                scanf("%d", &sure);
                if(sure==1){
                    printf("\n\nVaciando Cola...");
                    elim_FIFO();
                    if(inicio==NULL){
                        printf("\nLa Cola se encuentra Vacia!!\n");
                    }else{
                        printf("\nLa Cola no fue vaciada!! :(\n");
                    }
                }else{
                    printf("\n\nOk, regresando al menu...\n");
                }
                break;
            case 6:
                printf("\n\t\tINSERTAR DESDE ARCHIVO COLAS\n\n");
                printf("\nInsetando datos...\n");
                inserArchivoCola();
                printf("\n\nInsercion finalizada correctamente\n");
                break;
            default:
                system("cls");
                printf("\nValor ingresado no valido");
        }
        system("pause");
    }while(opc!=0);
}
void menuListas(){/**FUNCION MENU LISTAS**/
    int opc;
    do{
        printf("\n\t\t\tMENU LISTAS\n\n");
        printf("1). Insertar datos de Archivo a Lista.\n");
        printf("2). Aplicar Metodo de Ordenamiento Burbuja.\n");
        printf("3). Aplicar Metodo de Ordenamiento Seleccion.\n");
        printf("4). Buscar un Valor en la Cola.\n");
        printf("5). Vaciar Cola.\n");
        printf("6). Insertar Datos desde Archivo.\n");
        printf("0). Salir al menu principal\n\n");
        printf("Seleccione una opcion: \n\n");
        scanf("%d",&opc);
        switch(opc){
            case 0:
                system("cls");
                printf("\nHas Salido del Menu Lista!!!");
                system("pause");
                menuProyecto();
                break;
            case 1:
                printf("\n\t\t\tIMPRIMIR LISTAS\n\n");
                most_Lista();
                break;
            case 2:
                system("cls");
                printf("\n\t\t\tMETODO BURBUJA EN LISTA\n\n");
                printf("\nOrdenando...\n\n");
                metOrdBurbujaLista();

                break;
            case 3:
                system("cls");
                printf("\n\t\t\tMETODO SELECCION EN LISTA\n\n");
                printf("\nOrdenando...\n\n");
                metOrdSeleccionLista();

                break;
            case 4:
                system("cls");
                printf("\n\t\t\tBUSCAR EN LISTA\n\n");
                buscar_LISTA();
                break;
            case 5:
                printf("\n\t\tVACIAR LISTA\n\n");
                printf("Desea vaciar la Lista realmente? <1> Si - <0>No: ");
                scanf("%d", &sure);
                if(sure==1){
                    printf("\n\nVaciando Lista...");
                    elim_FIFO();
                    if(inicio==NULL){
                        printf("\nLa Lista se encuentra Vacia!!\n");
                    }else{
                        printf("\nLa Lista no fue vaciada!! :(\n");
                    }
                }else{
                    printf("\n\nOk, regresando al menu...\n");
                }
                break;
            case 6:
                printf("\n\t\tINSERTAR DESDE ARCHIVO LISTAS\n\n");
                printf("\nInsetando datos...\n");
                insert_men_may_LISTA();
                printf("\n\nInsercion finalizada correctamente\n");
                break;
            default:
                system("cls");
                printf("\nValor ingresado no valido");
        }
    }while(opc!=0);
}
void menuPilas(){/**FUNCION MENU PILA**/
    int opc;
    do{
        printf("\n\t\t\tMENU PILAS\n\n");
        printf("1). Mostrar la Pila.\n");
        printf("2). Aplicar Metodo de Ordenamiento Burbuja.\n");
        printf("3). Aplicar Metodo de Ordenamiento Seleccion.\n");
        printf("4). Buscar un Valor en la Pila.\n");
        printf("5). Vaciar Pila.\n");
        printf("6). Insertar Datos desde Archivo.\n");
        printf("0). Salir al menu principal\n\n");
        printf("Seleccione una opcion: \n\n");
        scanf("%d",&opc);
        switch(opc){
            case 0:
                system("cls");
                printf("\nHas Salido del Menu Pilas!!!");
                system("pause");
                menuProyecto();
                break;
            case 1:
                printf("\n\t\t\tMOSTRAR LA PILA\n\n");
                most_LIFO();
                break;
            case 2:
                system("cls");
                printf("\n\t\t\tMETODO BURBUJA EN PILA\n\n");
                printf("\nOrdenando...\n\n");
                metOrdBurbujaPila();


                break;
            case 3:
                system("cls");
                printf("\n\t\t\tMETODO INSERCION EN PILA\n\n");
                printf("\nOrdenando...\n\n");
                metOrdSeleccionPila();

                break;
            case 4:
                system("cls");
                printf("\n\t\t\tBUSCAR EN PILA\n\n");
                printf("\n\nDigite Valo a buscar: ");
                scanf("%d", &vBuscado);
                printf("\n\n");
                buscar_LIFO(pila, vBuscado);
                break;
            case 5:
                printf("\n\t\tVACIAR PILA\n\n");
                printf("Desea vaciar la Pila realmente? <1> Si - <0>No: ");
                scanf("%d", &sure);
                if(sure==1){
                    printf("\n\nVaciando Pila...");
                    elim_LIFO();
                    if(inicio==NULL){
                        printf("\nLa Pila se encuentra Vacia!!\n");
                    }else{
                        printf("\nLa Pila no fue vaciada!! :(\n");
                    }
                }else{
                    printf("\n\nOk, regresando al menu...\n");
                }
                break;
            case 6:
                printf("\n\t\tINSERTAR DESDE ARCHIVO PILA\n\n");
                printf("\nInsertando datos...\n");
                inserArchivoPila();
                printf("\n\nInsercion finalizada correctamente\n");
                break;

            default:
                system("cls");
                printf("\nValor ingresado no valido");
        }
    }while(opc!=0);
}
void menuArboles(){/**FUNCION MENU ARBOLES**/
    int opc;
    do{
        printf("\n\t\t\tMENU ARBOLES\n\n");
        printf("1). Imprimir Arbol Arbol.\n");
        printf("2). Buscar un Valor en el Arbol.\n");
        printf("3). Vaciar Arbol.\n");
        printf("4). Insertar Datos desde Archivo.\n");
        printf("0). Salir al menu principal\n\n");
        printf("Seleccione una opcion: \n\n");
        scanf("%d",&opc);
        switch(opc){
            case 0:
                system("cls");
                printf("\nHas Salido del Menu Arboles!!!");
                system("pause");
                menuProyecto();
                break;
            case 1:
                printf("\n\t\t\tIMPRIMIR ARBOL\n\n");
                printf("\nEl Arbol contiene los siguientes datos: \n\n");
                inOrden(arbol);
                break;
            case 2:
                system("cls");
                printf("\n\t\t\tBUSCAR VALOR EN ARBOL\n\n");
                printf("\nDigite Valor a buscar: ");
                scanf("%d",&vBuscado);
                if(buscNodo(arbol,vBuscado)==true){
                    printf(" El valor %d se encuentra en el Arbol\n\n",vBuscado);
                }else{
                    printf(" El valor %d NO se encuentra en el Arbol\n\n",vBuscado);
                }
                break;
            case 3:
                system("cls");
                printf("\n\t\t\tVACIAR ARBOL ARBOL\n\n");
                printf("Desea vaciar Arbol realmente? <1> Si - <0>No: ");
                scanf("%d", &sure);
                if(sure==1){
                    printf("\n\nVaciando Arbol...");
                    arbol=NULL;
                    if(arbol==NULL){
                        printf("\nEl Arbol se encuentra Vacio!!\n");
                    }else{
                        printf("\nEl Arbol no fue vaciado!! :(\n");
                    }
                }else{
                    printf("\n\nOk, regresando al menu...\n");
                }
                break;
            case 4:
                system("cls");
                printf("\n\t\tINSERTAR DESDE ARCHIVO A ARBOL\n\n");
                printf("\nInsetando datos...\n");
                inserArchivoArbol();
                printf("\n\nInsercion finalizada correctamente\n");
                break;
            default:
                system("cls");
                printf("\nValor ingresado no valido");
        }
    }while(opc!=0);
}
/**OK**/void llenadoArchivo(){/**FUNCION PARA GUARDAR DATOS EN ARCHIVO**/
    srand(time(NULL));
    FILE *documento;
 	documento = fopen ( "Archivo_1Millon.txt", "w" );
    if(documento == NULL){
        printf("\nSe produjo error al crear el documento...\n\n");
    system("pause");
    }else{
        printf("\nSe esta generando el Millon de datos... \n\n\n ");
        system("pause");
        while(i < millon){
            n = (rand() % (1999998 + 1)) - 999999;
            sprintf(numero,"%d",n);
            ins_FIFO(inicio, fin, n);
            ins_LIFO(pila, n);
            insertar_arbol(arbol,n);
            fputs(numero,documento);
            putc(',',documento);
            i++;
        }
        fclose (documento);
        printf("\nSe han generado %d datos\n\n",i);
        printf("\n\n");
        system("pause");
    }
}
/**OK**/void leerArchivo(){/**FUNCION PARA MOSTRAR DATOS DE ARCHIVO**/
    char num;
    printf("\n\nAhora vamos a abrir el archivo...\n\n");
    FILE *documento;
 	documento = fopen ( "Archivo_1Millon.txt", "r" );
        if(documento == NULL){
        printf("El archivo no existe o no es posible abirlo");
    }else{
        printf( "Contenido del fichero:\n" );
        num = getc(documento);
        while (feof(documento)==0) {
        printf( "%c",num );
        num = getc(documento);

        }
	}
    fclose(documento);
}
/**OK**/void metOrdBurbujaCola(){/**FUNCION PARA METODO DE ORDENAMIENTO BURBUJA**/
    long inic, fin;

    inic = clock();
    documento=fopen("Metodo_Burbuja.txt","w");
    if(inicio != NULL){
		Nodo *p=ReservaMemoria;
		Nodo *j=ReservaMemoria;
		int aux;
		p = inicio;
		while(p != NULL){
			j = p ->Siguiente;
			while(j != NULL){
				if(p -> dato > j -> dato){
					aux = j -> dato;
					j -> dato = p -> dato;
					p -> dato = aux;
                    fputc(aux,documento);
                    putc(',',documento);
				}
				j = j -> Siguiente;
			}
			p = p -> Siguiente;
		}
		fclose (documento);
	}else{
		printf("La lista esta vacia");
	}
    printf("\nHa finalizado el ordenamiento!!\n\n");
    system("pause");
    printf("\nEn orden   seria asi: \n\n");
    most_FIFO();
    fin = clock();
    printf("\n\n tiempo que tardo en ejecucion %f s.\n", (fin-inic)/(float)CLOCKS_PER_SEC);
}
/**OK**/void metOrdBurbujaPila(){/**FUNCION PARA METODO DE ORDENAMIENTO BURBUJA**/
    long inic, fin;

    inic = clock();
    documento=fopen("Metodo_Burbuja_Pila.txt","w");
    if(pila != NULL){
		Nodo *p=ReservaMemoria;
		Nodo *j=ReservaMemoria;
		int aux;
		p = pila;
		while(p != NULL){
			j = p ->Siguiente;
			while(j != NULL){
				if(p -> dato > j -> dato){
					aux = j -> dato;
					j -> dato = p -> dato;
					p -> dato = aux;
                    fputc(aux,documento);
                    putc(',',documento);
				}
				j = j -> Siguiente;
			}
			p = p -> Siguiente;
		}
		fclose (documento);
	}else{
		printf("La lista esta vacia");
	}
    printf("\nHa finalizado el ordenamiento!!\n\n");
    system("pause");
    printf("\nEn orden   seria asi: \n\n");
    most_LIFO();
    fin = clock();
    printf("\n\n tiempo que tardo en ejecucion %f s.\n", (fin-inic)/(float)CLOCKS_PER_SEC);

}
/**OK**/void metOrdBurbujaLista(){/**FUNCION PARA METODO DE ORDENAMIENTO BURBUJA**/
    long inic, fin;

    inic = clock();
    documento=fopen("Metodo_Burbuja_Pila.txt","w");
    if(pila != NULL){
		Nodo *p=ReservaMemoria;
		Nodo *j=ReservaMemoria;
		int aux;
		p = comienzo;
		while(p != NULL){
			j = p ->Siguiente;
			while(j != NULL){
				if(p -> dato > j -> dato){
					aux = j -> dato;
					j -> dato = p -> dato;
					p -> dato = aux;
                    fputc(aux,documento);
                    putc(',',documento);
				}
				j = j -> Siguiente;
			}
			p = p -> Siguiente;
		}
		fclose (documento);
	}else{
		printf("La lista esta vacia");
	}
    printf("\nHa finalizado el ordenamiento!!\n\n");
    system("pause");
    printf("\nEn orden   seria asi: \n\n");
    most_LIFO();
    fin = clock();
    printf("\n\n tiempo que tardo en ejecucion %f s.\n", (fin-inic)/(float)CLOCKS_PER_SEC);
}
/**OK**/void metOrdSeleccionCola(){/**FUNCION PARA METODO DE ORDENAMIENTO SELECCION**/
    long inic, fin;

    inic = clock();
    documento=fopen("Metodo_Insercion_Cola.txt","w");
    if(inicio != NULL){
		Nodo *p=ReservaMemoria;
		Nodo *j=ReservaMemoria;
		p=inicio;
		while(p!=NULL){
            menor=p->dato;
            j=p;
            while(j!=NULL){
                if(menor>j->dato){
                    menor=j->dato;
                    aux=p->dato;
                    p->dato=menor;
                    j->dato=aux;
                    fputc(aux,documento);
                    putc(',',documento);
                }
                j=j->Siguiente;
            }
            p=p->Siguiente;
		}
	}else{
		printf("La lista esta vacia");
	}
    printf("\nHa finalizado el ordenamiento!!\n\n");
    system("pause");
    printf("\nEn orden   seria asi: \n\n");
    most_FIFO();
    fin = clock();
    printf("\n\n tiempo que tardo en ejecucion %f s.\n", (fin-inic)/(float)CLOCKS_PER_SEC);
}
/**OK**/void metOrdSeleccionLista(){/**FUNCION PARA METODO DE ORDENAMIENTO SELECCION**/
     long inic, fin;

    inic = clock();
    documento=fopen("Metodo_Seleccion_Lista.txt","w");
    if(inicio != NULL){
		Nodo *p=ReservaMemoria;
		Nodo *j=ReservaMemoria;
		p=inicio;
		while(p!=NULL){
            menor=p->dato;
            j=p;
            while(j!=NULL){
                if(menor>j->dato){
                    menor=j->dato;
                    aux=p->dato;
                    p->dato=menor;
                    j->dato=aux;
                    fputc(aux,documento);
                    putc(',',documento);
                }
                j=j->Siguiente;
            }
            p=p->Siguiente;
		}
	}else{
		printf("La lista esta vacia");
	}
	fin = clock();
    printf("\n\n tiempo que tardo en ejecucion %f s.\n", (fin-inic)/(float)CLOCKS_PER_SEC);
}
/**OK**/void metOrdSeleccionPila(){/**FUNCION PARA METODO DE ORDENAMIENTO SELECCION**/
     long inic, fin;

    inic = clock();
    documento=fopen("Metodo_Seleccion_Pila.txt","w");
    if(pila != NULL){
		Nodo *p=ReservaMemoria;
		Nodo *j=ReservaMemoria;
		p=pila;
		while(p!=NULL){
            menor=p->dato;
            j=p;
            while(j!=NULL){
                if(menor>j->dato){
                    menor=j->dato;
                    aux=p->dato;
                    p->dato=menor;
                    j->dato=aux;
                    fputc(aux,documento);
                    putc(',',documento);
                }
                j=j->Siguiente;
            }
            p=p->Siguiente;
		}
	}else{
		printf("La lista esta vacia");
	}
    printf("\n\nHa finalizado el ordenamiento!!\n\n");
    system("pause");
    printf("\n\nEn orden seria asi: \n\n");
    most_LIFO();
    fin = clock();
    printf("\n\n tiempo que tardo en ejecucion %f s.\n", (fin-inic)/(float)CLOCKS_PER_SEC);
}
/**OK**/void metOrdInsercionPila(){/**FUNCION PARA METODO DE ORDENAMIENTO INSERCION**/
      long inic, fin;

    inic = clock();
    documento=fopen("Metodo_Insercion_Pila.txt","w");
    if(pila != NULL){
		Nodo *p=ReservaMemoria;
		Nodo *j=ReservaMemoria;
		p=pila;
		while(p!=NULL){
            menor=p->dato;
            j=p;
            while(j!=NULL){
                if(menor>j->dato){
                    menor=j->dato;
                    aux=p->dato;
                    p->dato=menor;
                    j->dato=aux;
                    fputc(aux,documento);
                    putc(',',documento);
                }
                j=j->Siguiente;
            }
            p=p->Siguiente;
		}
	}else{
		printf("La lista esta vacia");
	}
    printf("\n\nHa finalizado el ordenamiento!!\n\n");
    system("pause");
    printf("\n\nEn orden seria asi: \n\n");
    most_LIFO();
    fin = clock();
    printf("\n\n tiempo que tardo en ejecucion %f s.\n", (fin-inic)/(float)CLOCKS_PER_SEC);
}
/**OK**/void inserArchivoPila(){/**FUNCION PARA INSERTAR ARCHIVOS A LA PILA DESDE ARCHIVO**/
    char num;
    FILE *documento;
 	documento = fopen ( "Archivo_1Millon.txt", "r" );
        if(documento == NULL){
        printf("El archivo no existe o no es posible abirlo");
    }else{
        num = getc(documento);
        while (feof(documento)==0) {
        ins_LIFO(pila,num);
        num = getc(documento);
        }
	}
    fclose(documento);
}
/**OK**/void inserArchivoCola(){/**FUNCION PARA INSERTAR ARCHIVOS A LA COLA DESDE ARCHIVO**/
    char num;
    FILE *documento;
 	documento = fopen ( "Archivo_1Millon.txt", "r" );
        if(documento == NULL){
        printf("El archivo no existe o no es posible abirlo");
    }else{
        num = getc(documento);
        while (feof(documento)==0) {
        ins_FIFO(inicio,fin,num);
        num = getc(documento);
        }
	}
    fclose(documento);
}

/**OK**/void inserArchivoLista(){/**FUNCION PARA INSERTAR ARCHIVOS A LA LISTA DESDE ARCHIVO**/
    char num;
    FILE *documento;
 	documento = fopen ( "Archivo_1Millon.txt", "r" );
        if(documento == NULL){
        printf("El archivo no existe o no es posible abirlo");
    }else{
        num = getc(documento);
        while (feof(documento)==0) {
        ins_FIFO(inicio,fin,num);
        num = getc(documento);
        }
	}
    fclose(documento);
}

/**OK**/void inserArchivoArbol(){/**FUNCION PARA INSERTAR ARCHIVOS AL ARBOL DESDE ARCHIVO**/
    char num;
    FILE *documento;
 	documento = fopen ( "Archivo_1Millon.txt", "r" );
        if(documento == NULL){
        printf("El archivo no existe o no es posible abirlo");
    }else{
        num = getc(documento);
        while (feof(documento)==0) {
        insertar_arbol(arbol,num);
        num = getc(documento);
        }
	}
    fclose(documento);
}

