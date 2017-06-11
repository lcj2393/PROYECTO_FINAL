/**DEFINIR ASIGNACION DE MEMORIA**/
#define ReservaMemoria (Nodo*)malloc(sizeof(Nodo))

/**ESTRCUTURA NODO ARBOL**/
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
void impArbol(Nodo *);/**FUNCION PARA IMPRIMIR EL ARBOL**/
void impPosOrder(Nodo *);/**FUNCION PARA IMPRIMIR EL ARBOL POSORDEN**/
void impPreOrder(Nodo *);/**FUNCION PARA IMPRIMIR EL ARBOL PREORDEN**/
void impInOrder(Nodo *);/**FUNCION PARA IMPRIMIR EL ARBOL INORDEN**/

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
    int m;
    if(arbol==NULL){
        return false;
    }else{
        if(arbol->dato==n){
            return true;
        }else{
            printf("Buscar por <1>Izquierda O <2>Derecha: ");
            scanf("%d",&m);
            if(m==1){
                buscNodo(arbol->Izquierda,n);
            }else{
                buscNodo(arbol->Derecha,n);
            }
        }
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

/**FIN DEL PROGRAMA!!**/
