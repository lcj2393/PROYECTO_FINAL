/**DEFINIR ASIGNACION DE MEMORIA**/
#define ReservaMemoria (Nodo*)malloc(sizeof(Nodo))

/**ESTRUCTURA NODO ARBOL**/
struct Nodo{
    int dato;
    Nodo *Izquierda;
    Nodo *Derecha;
    Nodo *Siguiente;
    Nodo *Anterior;
};

Nodo *arbol=NULL;

void insNodo(Nodo *&,int);/**FUNCION INSERTAR EN NODO**/
bool buscNodo(Nodo *,int);/**FUNCION PARA BUSCAR NODOS EN EL ARBOL**/
void modNodo(Nodo *&,int);/**FUNCION PARA MODIFICAR NODO DEL ARBOL**/
void imparbol(Nodo *);/**FUNCION PARA IMPRIMIR EL ARBOL**/
void impPosOrder(Nodo *);/**FUNCION PARA IMPRIMIR EL ARBOL POSORDEN**/
void impPreOrder(Nodo *);/**FUNCION PARA IMPRIMIR EL ARBOL PREORDEN**/
void impInOrder(Nodo *);/**FUNCION PARA IMPRIMIR EL ARBOL INORDEN**/
void inOrden(Nodo *);
void insertar_arbol(Nodo *&, int );


Nodo *crearNodo(int n){
    Nodo *nNodo=(Nodo*)malloc(sizeof(Nodo));
    nNodo->dato=n;
    nNodo->Izquierda=NULL;
    nNodo->Derecha=NULL;
    return nNodo;
}

void insNodo(Nodo *&arbol, int n){/**FUNCION INSERTAR EN NODO**/
    int m;
    if(arbol==NULL){
        Nodo *nuevo=crearNodo(n);
        arbol=nuevo;
    }else{
        printf("Insertar a (1)Izquierda o (2)Derecha: ");
        scanf("%d",&m);
        if(m==1){
            insNodo(arbol->Izquierda,n);
        }else{
            insNodo(arbol->Derecha,n);
        }
    }
}
bool buscNodo(Nodo *arbol, int n){/**FUNCION PARA BUSCAR NODOS EN EL ARBOL**/
    if(arbol==NULL){
        return false;
    }else{
        if(arbol->dato==n){
            return true;
        }else{
                buscNodo(arbol->Izquierda,n);
                if(arbol->dato!=n){
                    buscNodo(arbol->Derecha,n);
                }
            }
            arbol=arbol->Siguiente;
        }
}
void modNodo(Nodo *&arbol, int n){/**FUNCION PARA MODIFICAR UN NODO DEL ARBOL**/
    int nuevoDato, ubicacion;
    if(arbol==NULL){
        return;
    }else{
        if(arbol->dato==n){
            printf("Digite nuevo dato: ");
            scanf("%d",&nuevoDato);
            arbol->dato=nuevoDato;
        }else{
            printf("Buscar 1.Izquierda  2.Derecha: ");
            scanf("%d",&ubicacion);
            if(ubicacion==1){
                modNodo(arbol->Izquierda,n);
            }else{
                modNodo(arbol->Derecha,n);
            }
        }
    }
}
void impPreOrder(Nodo *arbol){/**FUNCION PARA IMPRIMIR EL ARBOL PREORDEN**/
    if(arbol==NULL){
        return;
    }else{
        char convert_c2int=arbol->dato;
        printf("%c ",convert_c2int);
        impPreOrder(arbol->Izquierda);
        impPreOrder(arbol->Derecha);
    }
}
void impInOrder(Nodo *arbol){/**FUNCION PARA IMPRIMIR EL ARBOL INORDEN**/
    if(arbol==NULL){
        return;
    }else{
        impInOrder(arbol->Izquierda);
        char convert_c2int=arbol->dato;
        printf("%c ",convert_c2int);
        impInOrder(arbol->Derecha);
    }
}
void impPosOrder(Nodo *arbol){/**FUNCION PARA IMPRIMIR EL ARBOL POSORDEN**/
    if(arbol==NULL){
        return;
    }else{
        impPosOrder(arbol->Izquierda);
        impPosOrder(arbol->Derecha);
        char convert_c2int=arbol->dato;
        printf("%c ",convert_c2int);
    }
}

void imp_Arbol(Nodo *arbol, int cont){
int i;
	if(arbol == NULL){
		return;
	}else{
		imp_Arbol(arbol -> Derecha, cont += 1);
		for(i = 0; i < cont; i++){
			printf("   ");
		}
		printf("%d\n", arbol -> dato);
		imp_Arbol(arbol -> Izquierda, cont += 1);
	}
}
void insertar_arbol(Nodo *&arbol, int n){
    if(arbol==NULL){
        Nodo *nuevo_nodo = ReservaMemoria;
        arbol=nuevo_nodo;
        nuevo_nodo->dato=n;
        nuevo_nodo->Izquierda=NULL;
        nuevo_nodo->Derecha=NULL;
    }else{
        int valorRaiz=arbol->dato;
        if(n<valorRaiz){
            insertar_arbol(arbol->Izquierda,n);
        }else{
            insertar_arbol(arbol->Derecha,n);
        }
    }
}

void inOrden(Nodo *arbol){
    if(arbol==NULL){
        return;
    }else{
        inOrden(arbol->Izquierda);
        printf("%d - ",arbol->dato);
        inOrden(arbol->Derecha);
    }
}

/**FIN DEL PROGRAMA!!**/
