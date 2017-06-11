#define millon 1000

long long int a[millon];
long int n,pos,aux, menor;
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
void metOrdBurbujaCola();/**FUNCION PARA METODO DE ODENAMIENTO BUSBUJA**/
void metOrdBurbujaLista();/**FUNCION PARA METODO DE ODENAMIENTO BUSBUJA**/
void metOrdBurbujaPila();/**FUNCION PARA METODO DE ODENAMIENTO BUSBUJA PILA**/
void metOrdInsercionCola();/**FUNCION PARA METODO DE ODENAMIENTO INSERCION**/
void metOrdInsercionPila();/**FUNCION PARA METODO DE ODENAMIENTO INSERCION**/
void metOrdInsercionLista();/**FUNCION PARA METODO DE ODENAMIENTO INSERCION**/
void metOrdQuickSort();/**FUNCION PARA METODO DE ODENAMIENTO QUICK SORT**/

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

        printf("Seleccione una opcion: \n\n");
        scanf("%d",&opc);
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
                printf("\n\n");
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
        printf("3). Aplicar Metodo de Ordenamiento Insercion.\n");
        printf("4). Aplicar Metodo de Ordenamiento Quick Sort.\n");
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
                metOrdBurbujaCola();
                break;
            case 3:
                system("cls");
                printf("\n\t\t\tMETODO INSERCION EN COLAS\n\n");
                metOrdInsercionCola();
                break;
            case 4:
                system("cls");
                printf("\n\t\t\tMETODO QUICK SORT EN COLAS\n\n");
                metOrdQuickSort();
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
        printf("3). Aplicar Metodo de Ordenamiento Insercion.\n");
        printf("4). Aplicar Metodo de Ordenamiento Quick Sort.\n");
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
                metOrdBurbujaLista();
                break;
            case 3:
                system("cls");
                printf("\n\t\t\tMETODO INSERCION EN LISTA\n\n");
                metOrdInsercionLista();
                break;
            case 4:
                system("cls");
                printf("\n\t\t\tMETODO QUICK SORT EN LISTA\n\n");
                metOrdQuickSort();
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
        printf("3). Aplicar Metodo de Ordenamiento Insercion.\n");
        printf("4). Aplicar Metodo de Ordenamiento Quick Sort.\n");
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
                metOrdBurbujaPila();
                break;
            case 3:
                system("cls");
                printf("\n\t\t\tMETODO INSERCION EN PILA\n\n");
                metOrdInsercionPila();
                break;
            case 4:
                system("cls");
                printf("\n\t\t\tMETODO QUICK SORT EN PILA\n\n");
                metOrdQuickSort();
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
        printf("1). Insertar datos de Archivo al Arbol.\n");
        printf("2). Aplicar Metodo de Ordenamiento Burbuja.\n");
        printf("3). Aplicar Metodo de Ordenamiento Insercion.\n");
        printf("4). Aplicar Metodo de Ordenamiento Quick Sort.\n");
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
                printf("\n\t\t\tINSERTAR ARCHIVO A ARBOL\n\n");
                break;
            case 2:
                system("cls");
                printf("\n\t\t\tMETODO BURBUJA EN ARBOL\n\n");
                metOrdBurbujaLista();
                break;
            case 3:
                system("cls");
                printf("\n\t\t\tMETODO INSERCION EN ARBOL\n\n");
                metOrdInsercionPila();
                break;
            case 4:
                system("cls");
                printf("\n\t\t\tMETODO QUICK SORT EN ARBOL\n\n");
                metOrdQuickSort();
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
/**OK**/void metOrdBurbujaCola(){/**FUNCION PARA METODO DE ODENAMIENTO BURBUJA**/
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
}
/**OK**/void metOrdBurbujaPila(){/**FUNCION PARA METODO DE ODENAMIENTO BURBUJA**/
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
}
/**OK**/void metOrdBurbujaLista(){/**FUNCION PARA METODO DE ODENAMIENTO BURBUJA**/
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
}
void metOrdInsercionCola(){/**FUNCION PARA METODO DE ODENAMIENTO INSERCION**/
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
}
void metOrdInsercionLista(){/**FUNCION PARA METODO DE ODENAMIENTO INSERCION**/
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
}
void metOrdInsercionPila(){/**FUNCION PARA METODO DE ODENAMIENTO INSERCION**/
    documento=fopen("Metodo_Seleccion_Pila.txt","w");
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
    printf("\n\nHa finalizado el ordenamiento!!\n\n");
    system("pause");
    printf("\n\nEn orden seria asi: \n\n");
    most_LIFO();

}
void metOrdQuickSort(){
    for(i=0;i<millon;i++){
        pos = i;
        aux = a[i];
        while((pos>0)&&(aux < a[pos-1])){
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = aux;
    }

    printf("\nHa finalizado el ordenamiento!!\n\n");

    system("pause");

    printf("\nEn orden   seria asi: \n\n");

}
void inserArchivoPila(){
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
