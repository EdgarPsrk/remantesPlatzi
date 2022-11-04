#include<stdio.h>
#include<conio.h>
typedef struct nodo
{
    int dato;
    struct nodo* siguiente;
    struct nodo* anterior;
}
nodo;
nodo* primero=NULL ;
nodo* ultimo=NULL ;
void insertarnodo();
void desplegarlistapu();
int main()
{ insertarnodo();
  insertarnodo();
  insertarnodo();
  desplegarlistapu();
    return 0;
}
void insertarnodo()
{
    nodo* nuevo= (nodo*) malloc(sizeof(nodo));
    printf("ingrese el dato que contendra el nuevo nodo: ");
    scanf("%d",&nuevo->dato);
    if(primero==NULL)
    {
        primero=nuevo;
        primero->siguiente=NULL;
        primero->anterior=NULL;
        ultimo=primero;
    }
    else
    {
        ultimo->siguiente = nuevo;
        nuevo->siguiente=NULL;
        nuevo->anterior=ultimo;
    }
    printf("nodo ingresado con exito \n\n");

}
void desplegarlistapu()
{
	nodo* actual= (nodo*)malloc(sizeof(nodo));
	actual=primero;
	if(primero!=NULL)
	{
		while(actual!=NULL)
		{
			printf("\n%d",actual->dato);
			actual= actual->siguiente;
		}
		}else
		{
			printf("\n la lista esta vacia\n");
		}
		
	
}

