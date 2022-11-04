#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ASCENDENTE 1
#define DESCENDENTE 0

typedef struct _nodo {
char valor;
struct _nodo *siguiente;
struct _nodo *anterior;
} tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Lista;

/* Funciones con listas: */
void Insertar(Lista *l, char v);
void Borrar(Lista *l, char v);
void BorrarLista(Lista *);
void MostrarLista(Lista l, char orden);

int main() {
int a,x=0,c;
char b,d;
Lista lista = NULL;
pNodo p;
printf("\nIngresa la cantidad de elementos a Insertar:");
scanf("%d",&a);
fflush(stdin);
for(x=1;x<=a;x++)
{fflush(stdin);
printf("\nDigita una Letra:");
scanf("%c",&b);
Insertar(&lista, b);
}

MostrarLista(lista, ASCENDENTE);

MostrarLista(lista, DESCENDENTE);
getch();
printf("\nIngresa la cantidad de elementos a Borrar:");
scanf("%d",&c);
fflush(stdin);
for(x=1;x<=c;x++)
{
printf("\nDigita Letra a Eliminar:");
scanf("%c",&d);

Borrar(&lista, d);
}

MostrarLista(lista, ASCENDENTE);
MostrarLista(lista, DESCENDENTE);

BorrarLista(&lista);
getch();
return 0;
}

void Insertar(Lista *lista, char v)
{
pNodo nuevo, actual;

/* Crear un nodo nuevo */
nuevo = (pNodo)malloc(sizeof(tipoNodo));
nuevo->valor = v;
/* Colocamos actual en la primera posición de la lista */
actual = *lista;
if(actual) while(actual->anterior) actual = actual->anterior;
/* Si la lista está vacía o el primer miembro es mayor que el nuevo */
if(!actual || actual->valor > v) {
/* Añadimos la lista a continuación del nuevo nodo */
nuevo->siguiente = actual;
nuevo->anterior = NULL;
if(actual) actual->anterior = nuevo;
if(!*lista) *lista = nuevo;
}
else
{
/* Avanzamos hasta el último elemento o hasta que el siguiente tenga
un valor mayor que v */
while(actual->siguiente &&actual->siguiente->valor <= v)
actual = actual->siguiente;
/* Insertamos el nuevo nodo después del nodo anterior */
nuevo->siguiente = actual->siguiente;
actual->siguiente = nuevo;
nuevo->anterior = actual;
if(nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
}

}

void Borrar(Lista *lista, char v) {
pNodo nodo;

/* Buscar el nodo de valor v */
nodo = *lista;
while(nodo && nodo->valor < v) nodo = nodo->siguiente;
while(nodo && nodo->valor > v) nodo = nodo->anterior;

/* El valor v no está en la lista */
if(!nodo || nodo->valor != v) return;

/* Borrar el nodo */
/* Si lista apunta al nodo que queremos borrar, apuntar a otro */
if(nodo == *lista)
if(nodo->anterior) *lista = nodo->anterior;
else *lista = nodo->siguiente;

if(nodo->anterior) /* no es el primer elemento */
nodo->anterior->siguiente = nodo->siguiente;
if(nodo->siguiente) /* no es el último nodo */
nodo->siguiente->anterior = nodo->anterior;
free(nodo);
}
void BorrarLista(Lista *lista) {
pNodo nodo, actual;

actual = *lista;
while(actual->anterior) actual = actual->anterior;

while(actual) {
nodo = actual;
actual = actual->siguiente;
free(nodo);
}
*lista = NULL;
}

void MostrarLista(Lista lista, char orden) {
pNodo nodo = lista;

if(!lista) printf("Lista vacía");

nodo = lista;
if(orden == ASCENDENTE) {
while(nodo->anterior) nodo = nodo->anterior;
printf("Orden ascendente: ");
while(nodo) {
printf("%c -> ", nodo->valor);
nodo = nodo->siguiente;
}
}
else {
while(nodo->siguiente) nodo = nodo->siguiente;
printf("Orden descendente: ");
while(nodo) {
printf("%c -> ", nodo->valor);
nodo = nodo->anterior;
}
}

printf("\n");
}
