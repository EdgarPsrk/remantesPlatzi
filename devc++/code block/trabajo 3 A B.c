#include<iostream.h>
#include<cstdlib.h>
#include<conio.h>
using namespace std;

int arreglo[100];
int contador=0;
int numNodos;

struct nodo{
	int num;
	struct nodo *izq, *der;
};

typedef struct nodo *PER;


PER Hijos(PER &arbol){

	if(arbol->izq==NULL){
		return arbol->izq;
	}else if(arbol->der==NULL){
		return arbol->der;
	}else{
		Hijos(arbol->izq);
		Hijos(arbol->der);
	}
}

PER crearNodo(int x)
{
	PER nuevoNodo = new(struct nodo);
	nuevoNodo->num = x;
	nuevoNodo->izq = NULL;
	nuevoNodo->der = NULL;
	return nuevoNodo;
}


void Insertar(PER &arbol,int x){

		arbol=crearNodo(x);

}

void NodoMayor(PER &pos,int x){

	PER hijo=NULL;

	if(pos==NULL){
		pos=crearNodo(x);
	}else if(pos->num<x){
		int aux=pos->num;
		pos->num=x;
		hijo=Hijos(pos);
		Insertar(hijo,x);
	}else{
         	hijo=Hijos(pos);
		Insertar(hijo,x);
}
}

void preOrden(PER pin)
{
	if(pin!=NULL)
	{
		cout << pin->num <<" ";
		preOrden(pin->izq);
		preOrden(pin->der);
	}
}

void enOrden(PER pin){
	if(pin!=NULL)
	{
		enOrden(pin->izq);
		cout << pin->num << " ";
		enOrden(pin->der);
	}
}

void postOrden(PER arbol)
{
	if(arbol!=NULL)
	{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout << arbol->num<< " ";
	}
}

int main (int argc, char *argv[]) {

	PER arbol=NULL;

	cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";

	cout << " Numero de nodos del arbol:  ";
	cin >> numNodos;
	cout << endl;

	for(int i=0; i<numNodos; i++)
	{
		cout << " Numero del nodo " << i+1 << ": ";
		cin >> arreglo[i];
		NodoMayor(arbol,arreglo[i]);
	}
	postOrden(arbol);

	return 0;
}
