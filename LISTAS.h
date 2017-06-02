/**DEFINIR ASIGNACION DE MEMORIA**/
#define ReservaMemoria (Nodo*)malloc(sizeof(Nodo))

void iniciar_LIFO();//FUNCION PAR AINICIALIZAR LA PILA EN NULL
void ins_LIFO(Nodo *&, int);//FUNCION PARA INSERTAR ELEMENTOS EN LISTA LIFO
void most_LIFO();//FUNCION PARA MOSTRAR ELEMENTOS DE LA PILA
void buscar_LIFO(Nodo *, int);//FUNCION PARA BUSCAR EN LA PILA
void quit_LIFO(Nodo *&, int &);//FUNCION PARA LIMPIAR PILA
bool vacia_LIFO(Nodo *&);//FUNCION PARA VALIDAR SI LA PILA ESTA VACIA
void elim_LIFO();//FUNCION PARA VACIAR LA PILA EN NULL
void mod_LIFO();//FUNCION PARA MODIFICAR ELEMENTOS DE LA PILA

void iniciar_FIFO();//FUNCION PAR AINICIALIZAR LA COLA EN NULL
void ins_FIFO(Nodo *&, Nodo *&, int );//FUNCION PARA INSERTAR ELEMENTOS A LA COLA
void most_FIFO();//FUNCION PARA MOSTRAR ELEMENTOS DE LA COLA
void buscar_FIFO();//FUNCION PARA BUSCAR EN LA COLA
void quit_FIFO();//FUNCION PARA LIMPIAR COLA
bool vacia_FIFO(Nodo *&);//FUNCION PARA VALIDAR SI LA PILA ESTA COLA
void elim_FIFO();//FUNCION PARA VACIAR LA COLA EN NULL
void edit_elemento_FIFO();//FUNCION PARA EDITAR ELEMENTO DE LA COLA

void iniciar_LISTA();//FUNCION PARA INICIALIZAR LA LSITA
void most_Lista();//FUNCION PARA MOSTRAR LOS ELEMENTOS DE LA LISTA
void edit_LISTA();//FUNCION PARA EDITAR LOS ELEMENTOS DE UNA LISTA
void elim_elemento_LISTA();//FUNION PARA ELIMINAR ELEMENTOS DE UNA LISTA
void buscar_LISTA();//FUNCION PARA BUSCAR ELEMENOS EN LA LISTA
void insert_men_may_LISTA();//FUNCION PARA ORDENAR DATOS DE MENOR A MAYOR
void insert_may_men_LISTA();//FUNCION PARA ORDENAR LISTA DE MAYOR A MENOR

void iniciar_LD();//FINCION PARA INCIALIZAR LA LISTA DOBLEMENTE ENLAZADA
void ins_LD();// INGRESAR ELEMENTOS A LA LISTA DOBLEMENTE ENLAZADA
void most_LD();//FUNCION PARA MOSTRAR LOS ELEMENTOS DE LA LISTA DOBLEMENTE ENLAZADA
void most_IZQ_DER();// MOTRAR ELEMENTOS DE LA LISTA DOBLEMENTE ENLAZADA DE IZQUIERDA A DERECHA
void most_DER_IZQ();// IMPRIMIR ELEMENTOS DE LA LISTA DOBLEMENTE ENLAZADA DE DERECHA A IZQUIERDA
void busc_LD();//BUSCAR ELEMENTOS EN LA LISTA DOBLEMENTE ENLAZADA
void edit_LD();//EDITAR ELEMENTOS EN LA LISTA DOBLEMENTE ENLAZADA
void elim_LD();//ELIMINAR ELEMENTOS DE LA LISTA DOBLEMENTE ENLAZADA

    Nodo *pila;
    Nodo *inicio;
    Nodo *fin;

//FUNCIONES DE PILA
void iniciar_LIFO(){//FUNCION PAR AINICIALIZAR LA PILA EN NULL (OK)
    Nodo * pila = NULL;
}
void ins_LIFO(Nodo *&pila, int n){//FUNCION INSERTAR ELEMENTOS EN PILA (OK)
    Nodo *nuevo_Nodo = ReservaMemoria;
    nuevo_Nodo->dato=n;
    nuevo_Nodo->Siguiente=pila;
    pila= nuevo_Nodo;
}
void most_LIFO(){//FUNCION PARA MOSTRAR ELEMENTOS DE LA PILA
    Nodo * aux = ReservaMemoria;
    aux = pila;
    while(aux != NULL){
        printf("<%d>", aux->dato);
        aux=aux->Siguiente;
    }
}
void quit_LIFO(Nodo *&pila, int &n){//FUNCION PARA LIMPIAR PILA
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->Siguiente;
    free(aux);
}
bool vacia_LIFO(Nodo *&pila){//FUNCION PARA VALIDAR SI LA PILA ESTA VACIA
    return (pila==NULL)?true: false;
}
void elim_LIFO(){//FUNCION PARA VACIAR LA PILA EN NULL
    Nodo * pila = NULL;
}
void buscar_LIFO(Nodo *pila, int datobuscado){//FUNCION PARA BUSCAR EN LA PILA
    Nodo* aux = ReservaMemoria;
    aux = pila;
    int encontrado=0;
    if(pila != NULL){
        while(aux != NULL){
            if(aux->dato == datobuscado){
                printf("\nEl Dato ( %d ) - Se encuentra en la Pila\n", datobuscado);
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato ( %d ) - No se encuentra en la Pila\n", datobuscado);
        }
    }else{
        printf("\nPila Vacia\n");
    }
}
void mod_LIFO(){
    Nodo* aux = ReservaMemoria;
    aux = pila;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite valor a buscar para editar: ");
    scanf("%d", &nodo_consultado);
    if(pila != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Dato ( %d ) - Se encuentra en la Pila\n", nodo_consultado);
                printf("\nDigite Nuevo Dato: ");
                scanf("%d", &aux->dato);
                printf("\n\nNodo modificado Correctamente\n");
                encontrado = 1;
            }aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato ( %d ) - No se encuentra en la Pila\n", nodo_consultado);
        }
    }
}

//FUNCIONES DE COLAS
void iniciar_FIFO(){//FUNCION PARA INICIALIZAR LA COLA EN NULL
    Nodo * inicio = NULL;
    Nodo * fin = NULL;
}
void ins_FIFO(Nodo *&inicio, Nodo *&fin, int num){//FUNCION PARA INSERTAR ELEMENTOS A LA COLA
    Nodo *nuevo_Nodo = ReservaMemoria;
    nuevo_Nodo -> dato = num;
    nuevo_Nodo -> Siguiente = NULL;
    if((vacia_FIFO(inicio))){
        inicio = nuevo_Nodo;
    }else{
        fin -> Siguiente = nuevo_Nodo;
    }
    fin = nuevo_Nodo;
}
void most_FIFO(){//FUNCION PARA MOSTRAR ELEMENTOS DE LA COLA
    Nodo *aux = ReservaMemoria;
    aux = inicio;
    while(aux != NULL){
        printf(" <%d> ", aux -> dato);
        aux = aux -> Siguiente;
    }
}
void quit_FIFO(){//FUNCION PARA LIMPIAR COLA
    Nodo * aux = ReservaMemoria;
    aux = inicio;
    Nodo * anterior = ReservaMemoria;
    anterior = NULL;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite Dato a Eliminar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL && encontrado != 1){
            if(aux->dato == nodo_consultado){
                if(aux == inicio){
                    inicio = inicio -> Siguiente;
                }else{
                    anterior -> Siguiente = aux -> Siguiente;
                }
                printf("\nDato Eliminado Con Exito!!\n");
                encontrado = 1;
            }
            anterior = aux;
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato No Ha Sido Encontrado\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\nCola Vacia!!\n");
    }
}
bool vacia_FIFO(Nodo *&inicio){//FUNCION PARA VALIDAR SI LA COLA ESTA VACIA
    return (inicio==NULL)?true: false;
}
void elim_FIFO(){//FUNCION PARA VACIAR LA COLA EN NULL
    Nodo * inicio = NULL;
    Nodo * fin = NULL;
}
void buscar_FIFO(){//FUNCION PARA BUSCAR EN LA COLA
    Nodo *aux = ReservaMemoria;
    aux = inicio;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite Valor a Consultar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Dato ( %d ) - Se Ha Encontrado!!\n", nodo_consultado);
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nValor (%d) No Encontrado\n",nodo_consultado);
        }
    }else{
        printf("\nCola Vacia\n");
    }
}
void edit_elemento_FIFO(){//FUNCION PARA EDITAR ELEMENTO DE LA COLA
    Nodo* aux = ReservaMemoria;
    aux = inicio;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite Valor a consultar para editar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Valor ( %d ) - Se ha encontrado\n\n", nodo_consultado);
                printf("\nDigite Nuevo Dato: ");
                scanf("%d", &aux->dato);
                printf("\nValor modificado correctamente\n");
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato no ha sido encontrado\n");
        }
    }else{
        printf("\nCola Vacia\n");
    }
}

//FUNCIONES DE LISTA SIMPLE
void iniciar_LISTA(){
    Nodo *inicio=NULL, *fin=NULL;
}
void most_Lista(){//FUNCION PARA MOSTRAR LOS ELEMENTOS DE LA LISTA
    Nodo* aux = ReservaMemoria;
    aux = inicio;
    if(inicio != NULL){
        while(aux != NULL){
            printf("\n     %d", aux -> dato);
            aux = aux -> Siguiente;
        }
    }else{
        printf("\n\nLista Vacia");
    }
}
void busc_LISTA(){//FUNCION PARA BUSCAR UN ELEMENTO EN LA LISTA
    Nodo* aux = ReservaMemoria;
    aux = inicio;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite Dato a Consultar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Valor ( %d ) - Se encuentra en la Lista\n", nodo_consultado);
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Valor nos e encuentra en la lista\n");
        }
    }else{
        printf("\nLA Lista Vacia!!\n");
    }
}
void edit_LISTA(){//FUNCION PARA EDITAR LOS ELEMENTOS DE UNA LISTA
    Nodo* aux = ReservaMemoria;
    aux = inicio;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite dato a buscar en la lista para ser modificado: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nDato Encontrado ( %d )\n", nodo_consultado);
                printf("\nDigite nuevo Dato: ");
                scanf("%d", &aux->dato);
                printf("\nModificado Exitosamente\n");
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl dato no se encuentra en la lista\n");
        }
    }else{
        printf("\nLista Vacia\n");
    }
}
void elim_elemento_LISTA(){//FUNION PARA ELIMINAR ELEMENTOS DE UNA LISTA
    Nodo* aux = ReservaMemoria;
    aux = inicio;
    Nodo* anterior = ReservaMemoria;
    anterior = NULL;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nIngrese dato a buscar para eliminar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL && encontrado != 1){
            if(aux->dato == nodo_consultado){
                if(aux == inicio){
                    inicio = inicio -> Siguiente;
                }else{
                    anterior -> Siguiente = aux -> Siguiente;
                }
                printf("\nSe ha encontrado el dato\n");
                encontrado = 1;
            }
            anterior = aux;
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato no se encontra\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\nLista Vacia!!\n");
    }
}
void buscar_LISTA(){//FUNCION PARA BUSCAR ELEMENOS EN LA LISTA
  int b, control;
  control=0;
  printf("\nIngrese numero a buscar: \n");
  scanf("%d",&b);
    while (inicio!=NULL && control==0){
        if(inicio->dato==b){
            control=1;
        }
            inicio=inicio->Siguiente;
    }
    if(control==1){
       printf("\nEl numero buscado si existe en la Lista! \n");
       } else{
            printf("\nEl numero buscado no existe en la Lista!\n");
    }
}
int tam_LISTA(){//FUNCION PARA SABER EL TAMAÑO DE LA LISTA
int cant = 0;
while(inicio!=NULL){
    cant++;
    inicio = inicio->Siguiente;
    }
  return cant;
}
void insert_may_men_LISTA(){//FUNCION PARA ORDENAR LISTA DE MAYOR A MENOR
     Nodo *aux2 , *next;
     aux2=ReservaMemoria;
     next=ReservaMemoria;
     int t;

     aux2 = inicio;
     while(aux2->Siguiente != NULL){
          next = aux2->Siguiente;
          while(next!=NULL){
               if(aux2->dato < next->dato){
                    t = next->dato;
                    next->dato = aux2->dato;
                    aux2->dato = t;
                    printf("<%d>",t);
               }
               next = next->Siguiente;
          }
          aux2 = aux2->Siguiente;
          next = aux2->Siguiente;
     }
     printf("\n\n\tLista ordenada!!");
}
void insert_men_may_LISTA(){//FUNCION PARA ORDENAR DATOS DE MENOR A MAYOR
     Nodo *aux2 , *next;
     aux2=ReservaMemoria;
     next=ReservaMemoria;
     int t;

     aux2 = inicio;
     while(aux2->Siguiente != NULL){
          next = aux2->Siguiente;
          while(next!=NULL){
               if(aux2->dato > next->dato){
                    t = next->dato;
                    next->dato = aux2->dato;
                    aux2->dato = t;
                    printf("<%d>",t);
               }
               next = next->Siguiente;
          }
          aux2 = aux2->Siguiente;
          next = aux2->Siguiente;
     }
     printf("\n\n\tLista ordenada!!");
}

//FUNCIONES LISTAS DOBLEMENTE ENLAZADAS
void iniciar_LD(){//FINCION PARA INCIALIZAR LA LISTA DOBLEMENTE ENLAZADA
    inicio->Siguiente=NULL;
    inicio->Anterior=NULL;
    fin->Siguiente=NULL;
    fin->Anterior=NULL;
}
void ins_LD(){// INGRESAR ELEMENTOS A LA LISTA DOBLEMENTE ENLAZADA
    Nodo* nuevo_nodo = ReservaMemoria;
    printf("\n  Digite Valor a insertar: "); scanf("%d", &nuevo_nodo->dato);

    if(inicio == NULL){
        inicio = nuevo_nodo;
        inicio -> Siguiente = NULL;
        inicio->Anterior = NULL;
        fin = inicio;
    }else{
        fin -> Siguiente = nuevo_nodo;
        nuevo_nodo -> Siguiente = NULL;
        nuevo_nodo -> Anterior = fin;
        fin = nuevo_nodo;
    }
    printf("\n Dato ingresado correctamente! \n\n");
}
void most_LD(){//FUNCION PARA MOSTRAR LOS ELEMENTOS DE LA LISTA DOBLEMENTE ENLAZADA
    Nodo* aux2 = ReservaMemoria;
    aux2 = inicio;
    if(inicio != NULL){
        while(aux2 != NULL){
            printf("\n     %d", aux2 -> dato);
            aux2 = aux2 -> Siguiente;
        }
    }else{
        printf("\n\nLista Vacia");
    }
}
void most_IZQ_DER(){// MOTRAR ELEMENTOS DE FORMA ASCENDENTE EN LA LISTA DOBLEMENTE ENLAZADA
    Nodo *aux2 = ReservaMemoria;
    aux2 = inicio;
    if(inicio != NULL){
        while(aux2 != NULL){
            printf("<%d>", aux2->dato);
            aux2 = aux2->Siguiente; }
    }else{ printf("\nLista Vacia!\n\n"); }
}
void most_DER_IZQ(){// IMPRIMIR ELEMENTOS DE FORMA DESCENDENTE EN LA LISTA DOBLEMENTE ENLAZADA
    Nodo *aux2 = ReservaMemoria;
    aux2 = fin;
    if(inicio != NULL){
        while(aux2 != NULL){
            printf("<%d>", aux2->dato);
            aux2 = aux2->Anterior; }
    }else{ printf("\nLista vacia!\n\n"); }
}
void busc_LD(){//BUSCAR ELEMENTOS EN LA LISTA DOBLEMENTE ENLAZADA
    int buscar=0;
    bool encontrado=false;
    Nodo *aux2 = ReservaMemoria;
    aux2 = inicio;
    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(inicio != NULL){
        while(aux2 != NULL && encontrado != true){
            if(aux2->dato == buscar){
                printf("\n  El numero (%d) se encuentra en la lista! \n\n", buscar);
                encontrado = true;
            }
            aux2 = aux2->Siguiente;
        } if(encontrado == false){
                printf("\nEl nodo se encuentra en la lista! \n\n"); }
    }else{ printf("\nLista vacia!\n\n"); }
}
void edit_LD(){//EDITAR ELEMENTOS EN LA LISTA DOBLEMENTE ENLAZADA
    int buscar=0;
    bool encontrado=false;
    Nodo *aux2 = ReservaMemoria;
    aux2 = inicio;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);
    if(inicio != NULL){
        while(aux2 != NULL){
            if(aux2->dato == buscar){
                printf("\n  El numero (%d) se encuentra en la lista", buscar);
                printf("\n  Ingrese el nuevo numero: ");
                scanf("%d", &aux2->dato);
                printf("\n  El numero (%d) se modifico con exito! \n\n");
                encontrado = true;
            }
            aux2 = aux2->Siguiente;
        }
        if(encontrado == false){
            printf("\n  El numero (%d) no esta en la lista.", buscar); }
    }else{ printf("\nLista vacia!\n\n"); }
}
void elim_LD(){//ELIMINAR ELEMENTOS DE LA LISTA DOBLEMENTE ENLAZADA
    int buscar=0;
    bool encontrado=false;
    Nodo *aux2 = ReservaMemoria;
    aux2 = inicio;
    Nodo* Backk = ReservaMemoria;
    Backk = NULL;

    printf("\n  Ingrese el numero que desea buscar: ");
    scanf("%d", &buscar);

    if(inicio != NULL){
        while(aux2 != NULL && encontrado != true){
            if(aux2->dato == buscar){
                if(aux2 == inicio){
                    inicio = inicio -> Siguiente;
                    inicio -> Anterior = NULL;
                }else if(aux2 == fin){
                    Backk->Siguiente = NULL;
                    fin = Backk;
                }else{
                    Backk -> Siguiente = aux2 -> Siguiente;
                    aux2 -> Siguiente -> Anterior = Backk;
                }
                printf("\nNodo Eliminado\n");
                encontrado = true;
            }
            Backk = aux2;
            aux2 = aux2 -> Siguiente;
        }
        if(encontrado == false){
            printf("\nEl Nodo no se encuentra\n");
        }else{
            free(Backk);
        }
    }else{
        printf("\nLista Vacia\n");
    }
}
