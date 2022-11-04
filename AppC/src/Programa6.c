#include <stdio.h>
#include <locale.h>

//100(máx)
typedef union{
	int clave;
	char nombre [50], descripcion[100];
	float precio;
}Producto;

//158
typedef struct{
	int clave;
	char nombre [50], descripcion[100];
	float precio;
}Producto2;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	Producto cebolla, servilletas, manzanas;
	Producto2 llanta, aceite, llave;
	
	printf("\nEl tamaño de una cebolla es %d\n", sizeof(cebolla));//union
	printf("\nEl tamaño de un aceite es %d\n", sizeof(aceite));//struct
	
	printf("\nClave: ");
	scanf("%d", &cebolla.clave);
	printf("\nNombre: ");
	fflush(stdin); gets(cebolla.nombre);
	printf("\nDescripción: ");
	fflush(stdin); gets(cebolla.descripcion);
	printf("\nPrecio: ");
	scanf("%f", &cebolla.precio);
	
	printf("\nLa calve es: %d", cebolla.clave);
	printf("\nLa descripción es: %s", cebolla.descripcion);
	printf("\nEl precio es: %.2f", cebolla.precio);
}
