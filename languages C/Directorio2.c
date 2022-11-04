#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu()
{
	int opcion;
    printf("__________________________________\n");
	printf("DIRECTORIO\n\n");
	printf("1 - Agregar contactos\n");
	printf("2 - Borrar contactos\n");
	printf("3 - Ver lista de contactos\n");
	printf("4 - Buscar contacto\n");
	printf("5 - Salir\n");
	printf("\n¿Que opcion elijes? ");
	scanf("%d", &opcion);
    printf("__________________________________\n");
	return opcion;
}

int caratula()
{
	printf("El siguiente programa administra un directorio de contactos utilizando estructuras.\n\n");
	printf("Elaboraron:\n\n");
	printf("Barojas Gonzalez Janeth\n");
	printf("Flores Munguia Carlos\n");
	printf("Navarrete Rodriguez Mariel\n");
	printf("Rosas Reyes Miguel Angel\n");
	printf("Trejo Sanchez Emilio\n\n");
    printf("__________________________________\n");
	system("pause");
}

typedef struct
{
	int ID, borrado;
	char nombre[100];
	char calleCasa [30], numeroCasa[30], coloniaCasa[40], cpCasa[15];
	char calleTrabajo [30], numeroTrabajo[30], coloniaTrabajo[40], cpTrabajo[15];
	char telefonoCasa[15], telefonoMovil [15], telefonoTrabajo [15], telefonoOtro[15];
} Persona;

 
Persona AgregarContacto(int contador, int borrar)
{
	Persona C;
	int cantidadTelefonos, i;
    C.borrado=0;
	printf("Numero de contacto: %d\n", contador);

	printf("ID: ");
	scanf("%i", &C.ID);
	
	printf("\nNombre completo: ");
	fflush(stdin); gets(C.nombre);
	printf("Calle casa: ");
	fflush(stdin); gets(C.calleCasa);
	printf("Numero casa: ");
	fflush(stdin); gets(C.numeroCasa);
	printf("Colonia casa: ");
	fflush(stdin); gets(C.coloniaCasa);	
	printf("C.P. casa: ");
	fflush(stdin); gets(C.cpCasa);
	printf("Calle trabajo: ");
	fflush(stdin); gets(C.calleTrabajo);
	printf("Numero trabajo: ");
	fflush(stdin); gets(C.numeroTrabajo);	
	printf("Colonia trabajo: ");
	fflush(stdin); gets(C.coloniaTrabajo);	
	printf("C.P. trabajo: ");
	fflush(stdin); gets(C.cpTrabajo);
	printf("Telefono Casa: ");
	fflush(stdin); gets(C.telefonoCasa);
	printf("Telefono Movil: ");
	fflush(stdin); gets(C.telefonoMovil);
	printf("Telefono Trabajo: ");
	fflush(stdin); gets(C.telefonoTrabajo);
	printf("Telefono Otro: ");
	fflush(stdin); gets(C.telefonoOtro);
	printf("\n");
	return C;
}

void EscribirContacto(Persona C)
{
	if(C.borrado == 0)
	{
		printf("\nID: %d", C.ID);
		printf("\nNombre: %s", C.nombre);	
		printf("\nCalle casa: %s", C.calleCasa);
		printf("\nNumero casa: %s", C.numeroCasa);
		printf("\nColonia casa: %s", C.coloniaCasa);
		printf("\nC.P. casa: %s", C.cpCasa);
		printf("\nCalle casa: %s", C.calleTrabajo);
		printf("\nNumero casa: %s", C.numeroTrabajo);	
		printf("\nColonia casa: %s", C.coloniaTrabajo);	
		printf("\nC.P. casa: %s", C.cpTrabajo);
		printf("\nTelefono Casa: %s", C.numeroCasa);
		printf("\nTelefono Movil: %s", C.telefonoMovil);
		printf("\nTelefono Trabajo: %s", C.telefonoTrabajo);
		printf("\nTelefono Otro: %s\n\n", C.telefonoOtro);
        printf("__________________________________\n");
	}else
	{
		printf("La persona a sido borrada");	
	}
	
}

Persona BorrarContacto(Persona P)
{
	P.borrado=1;
	printf("\nEl contacto ha sido borrado\n\n");
	return P;
}


//AHB: Seria recomendable que la funcion recibiera un parametro
//     que indicara cuantos contactos hay para que el do...while
//     se detenga cuando recorra todos los contactos
int LocalizaPersona(Persona dir[100], int id)
{
	int i, j;
	Persona P;
	i=0;
	do
	{
		if( dir[i].ID == id )
		{
			j = i;
		}
		i++;	
	}while(dir[i-1].ID != id); 
	return j;
}

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	caratula();
	system("cls");
	int respuesta, opcion, cantidadContactos, contacto, identificador, h, respuesta2, ContactoBuscado, borrar, borrado, k, control;
    int menu();
	Persona directorio[100];
	h = 0;
	contacto = 0;
	borrado = 0;
	control = 0;

	do
	{
        system("cls");
		opcion=menu();

		switch (opcion)
		{
			case 1: 
			    system("cls");

				do
				{
					system("cls");
					h++;
					directorio[contacto]=AgregarContacto(h, borrado);
					contacto++;
					printf("\n¿Quieres agregar otro contacto (No=0)? ");
					scanf("%d", & respuesta2);
					printf("\n");
				}while(respuesta2 != 0);

				system("pause");
				break;

			case 2: 
			    system("cls");
			    printf("\n¿Cual es el ID del contacto que deseas borrar? ");
				scanf("%d", &identificador);
				for(k=0; k<=contacto; k++)
                {
					if(identificador==directorio[k].ID)
                    {
						
					    ContactoBuscado=LocalizaPersona(directorio, identificador);
					
					    printf("\nEl contacto que deseaa borrar es:\n ");
					
					    EscribirContacto(directorio[ContactoBuscado]);
					
					    printf("\n¿Estas seguro de querer borrarlo (No=0)? ");
					    scanf("%d", & borrar);
						control = 0;
                        break;
					}else
                    {
                        control = 1;
                    }
				}

				if(control == 1)
				{
					printf("\nEl ID ingresado no existe\n\n");
				}else
				{
					if(borrar == 1)
					{
						directorio[ContactoBuscado] = BorrarContacto(directorio[identificador]);
						
				    }else
					{
						directorio[contacto].borrado = 0;
						printf("\nReiniciamos el contador\n\n");
				    }
				}
				system("pause");
					
				break;

			case 3: 
			    system("cls");
				printf("\nLa lista de contactos es la siguiente:\n\n ");
	
				for (contacto=0; contacto<h; contacto++)
				{
					if(directorio[contacto].borrado == 0)
					{
						EscribirContacto(directorio[contacto]);	
					} 
				}
					
				system("pause");
			    break;

			case 4: 
			    system("cls");	
				printf("\n¿Cual es el ID del contacto que deseas buscar? ");
				scanf("%d", &identificador);
					
				for(k=0; k<=contacto; k++)
				{	
					if(identificador==directorio[k].ID)
					{
					    ContactoBuscado=LocalizaPersona(directorio, identificador);
				
					    printf("\nEl contacto buscado es:\n ");
					    EscribirContacto(directorio[ContactoBuscado]);
					    system("pause");
					}		
				}
					if(identificador!=directorio[ContactoBuscado].ID)
					{
					    printf("\nEl ID ingresado no existe\n\n");
					    system("pause");
					}
			    break;
			
			case 5:
				printf("\nNos vemos\n");
				break;

			default:
			    printf("Por favor escribe una opcion valida");
			    break;	
		}

	}while(opcion!=5);
	
	return 0;
}
