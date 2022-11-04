#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct{
	char calle[20];
	int numero;
	char colonia[20], CP[10], Municipio[20], Estado[20], Persona[100];
}Casa; 

void MuestraCasa (Casa c){
	printf("\nCalle: %s", &c.calle);
	printf("\nNúmero: %d", &c.numero);
	printf("\nColonia: %s", &c.colonia);
	printf("\nCP: es %s", &c.CP);
	printf("\nMunicipio: es %s", &c.Municipio);
	printf("\nEntidad: es %s", &c.Estado);
	printf("\nDueño: es %s", &c.Persona);
	system("pause");
}

int main(){
setlocale(LC_CTYPE, "Spanish");
	
	Casa privada, vacaciones, abuelos, papas;
	
	privada.numero=5;
	
	printf("\nDime la calle: ");
	fflush(stdin); gets(privada.calle);
	
	printf("\nDime la colonia: ");
	fflush(stdin); gets(privada.colonia);
	
	printf("\nLa calle de los abuelos es %s", abuelos.calle);
	scanf("%d", &abuelos.numero);
	
	printf("\nLos datos de la casa de los abuelos son: \n\n");
	MuestraCasa(abuelos);
	
	printf("\nLos datos de la casa privada son: \n\n");
	MuestraCasa(privada);
}
