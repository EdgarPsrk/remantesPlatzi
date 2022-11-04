#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef enum{
	Casa=1,
	Trabajo,
	Recado
}TipoTelefono;

typedef struct{
	char calle[30];
	int numero;
	char colonia[30];
	char cp[7];
}Direccion;


typedef struct{
	char numero[20];
	TipoTelefono tipo;
}Telefono;

typedef struct{
	int ID;
	char nombre[30];
	char apellido1[30];
	char apellido2[30];
	Direccion direccionCasa;
	Direccion direccionTrabajo;
	Telefono telefonos[5];
} Persona;

//Crear y devolver una direcci?n
Direccion AgregarDireccion(char *tipo){
	Direccion D;
	
	printf("\n\n", tipo);
	printf("\nDirección de\n\n%s ", tipo);
	
	printf("Calle: ");
	fflush(stdin); gets(D.calle);
	
	printf("N?mero: ");
	scanf("%d", &D.numero);	
	
	printf("Colonia: ");
	fflush(stdin); gets(D.colonia);	
	
	printf("C.P.: ");
	fflush(stdin); gets(D.cp);	
	
	return D;
}

//Crear y devuelve a una persona
Persona AgregarContacto(){
	Persona C;
	int cantidadTelefonos, i;
	
	printf("ID: ");
	scanf("%d", &C.ID);
	
	printf("Nombre: ");
	fflush(stdin); gets(C.nombre);
	
	printf("Apellido1: ");
	fflush(stdin); gets(C.apellido1);	
	
	printf("Apellido2: ");
	fflush(stdin); gets(C.apellido2);
	
	C.direccionCasa=AgregarDireccion("Casa");
	C.direccionTrabajo=AgregarDireccion("Trabajo");
	
	printf("Cantidad de tel?fonos: ");
	scanf("%d", &cantidadTelefonos);
	
	for(i=0; i<cantidadTelefonos; i++)
	{
		printf("N?mero del tel?fono %d: ", i+1);
		fflush(stdin); gets(C.telefonos[i].numero);
		
		printf("Tipo del tel?fono %d: ", i+1);
		printf("\n1. Casa");
		printf("\n2. Trabajo");
		printf("\n3. Recado");
		scanf("%d", &C.telefonos[i].tipo);
	}
	
	return C;
}

int main(){
	setlocale(LC_CTYPE, "Spanish");
	Persona directorio[100];
	int cantidadContactos, contacto;
	
	printf("------ DIRECTORIO ---------\n\n");
	
	printf("Cantidad de contactos: ");
	scanf("%d", &cantidadContactos);
	
	for(contacto=0; contacto<cantidadContactos; contacto++){
		directorio[contacto]=AgregarContacto(contacto+1);
	}
	
}
