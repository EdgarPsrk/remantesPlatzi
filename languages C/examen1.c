#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu(){
	int opcion;
		printf("TIENDA DE COMPUTADORAS\n\n");
		printf("1 - Agregar comptadora al catalogo\n");
		printf("2 - Eliminar una computadora del catalogo\n");
		printf("3 - Total de ventas\n");
		printf("4 - Vender computadora\n");
		printf("5 - Salir\n");
		printf("\nQue opcion elijes? ");
		scanf("%d", &opcion);
		return opcion;
		}

int caratula(){
	printf("El siguiente programa realiza la venta de computadoras en una tienda.\n\n");
	printf("Elaboraro:\n\n");
		printf("Flores Munguia Carlos\n");
		printf("Numero de cuenta: 421017056\n\n");
		system("pause");
	}

typedef struct{
	int clave;
	char marca[20];
	char modelo[20], tipo[20], procesador[20], sistemaOperativo[20];
	float precio;
	int borrado;
	int existencia;
} Computadora;

 
Computadora AgregarComputadora(int contador, int borra){
	Computadora C;
	int cantidadTelefonos, i;

	C.borrado=0;


	printf("\nClave: ");
	scanf("%i", &C.clave);	
	printf("\nMarca: ");
	fflush(stdin); gets(C.marca);	
	printf("Modelo: ");
	fflush(stdin); gets(C.modelo);
	printf("Tipo (Laptop, Desktop, Tableta): ");
	fflush(stdin); gets(C.tipo);
	printf("Procesador: ");
	fflush(stdin); gets(C.procesador);	
	printf("Sistema operativo: ");
	fflush(stdin); gets(C.sistemaOperativo);
	printf("Precio (pesos mexicanos): ");
	scanf("%f", &C.precio);
	printf("\n");
	return C;
}

void EscribirComputadora(Computadora C){
	if(C.borrado == 0){
		printf("\nClave: %d", C.clave);
		printf("\nNombre: %s", C.marca);	
		
		printf("\nModelo: %s", C.modelo);
		printf("\nTipo (Laptop, Desktop, Tableta): %s", C.tipo);
		printf("\nProcesador: %s", C.procesador);
		printf("\nSistema Operativo: %s", C.sistemaOperativo);
		printf("\nPrecio (pesos mexicanos): \n\n", C.precio);
	}
	
}

Computadora BorrarComputadora(Computadora C){
	
	C.borrado=1;
	printf("\nLa computadora ha sido borrada\n\n");
	
	return C;
}

int LocalizaComputadora(Computadora dir[100], int id){
	int i, j;
	Computadora P;

	i=0;
	do{
		if( dir[i].clave == id ){
			j = i;
		}
		i++;	
	}while(dir[i-1].clave != id); 
	return j;
}

	int main(){
		//setlocale(LC_CTYPE, "Spanish");
	    caratula();
	    system("cls");
	    int respuesta, opcion, cantidadContactos, computadora, identificador, j, respuesta2, ComputadoraBuscada, borrar, borrado, k;
        int menu();
		Computadora Compu[100];
		j = 0;
		computadora = 0;
		borrado = 0;

		do{
        	system("cls");

		opcion=menu();

			switch (opcion){

			case 1: system("cls");

					do{
						system("cls");
						j++;
						Compu[computadora]=AgregarComputadora(j, borrado);
						computadora++;
						printf("\nQuieres agregar otra computadora (Si=1, No=0)? ");
						scanf("%d", & respuesta2);
						printf("\n");
					}while(respuesta2 != 0);

					 system("pause");
				break;

			case 2: system("cls");
			printf("\nCual es la clave de la computadora que deseas borrar? ");
					scanf("%d", &identificador);
					for(k=0; k<=computadora; k++){
					if(identificador==Compu[k].clave){
						
					ComputadoraBuscada=LocalizaComputadora(Compu, identificador);
					
					printf("\nLa computadora que deseas borrar es:\n ");
					
					EscribirComputadora(Compu[ComputadoraBuscada]);
					
					printf("\n¿Estás seguro de querer borrarla (Si=1, No=0)? ");

					scanf("%d", & borrar);
					
					
					if(borrar == 1){
						Compu[ComputadoraBuscada] = BorrarComputadora(Compu[identificador]);
						
					} else{
						Compu[computadora].borrado = 0;
						printf("\nLa computadora ha sido borrada\n\n");
					system("pause");
					}
					}
					}
					system("pause");
					
				break;

			case 3: system("cls");
					printf("\nLa lista de contactos es la siguiente:\n\n ");
	
					for (computadora=0; computadora<j; computadora++){
						if(Compu[computadora].borrado == 0){
							EscribirComputadora(Compu[computadora]);	
						} 
					}
					
					system("pause");
			break;

			case 4: system("cls");
					
					printf("\nIngresa la clave de la computadora que deseas vender: ");
					scanf("%d", &identificador);
					
					for(k=0; k<=computadora; k++){
						
					if(identificador==Compu[k].clave){
					ComputadoraBuscada=LocalizaComputadora(Compu, identificador);
				
					printf("\nLa computadora buscada es:\n ");
					
					EscribirComputadora(Compu[ComputadoraBuscada]);
					system("pause");}
						
					}
					if(identificador!=Compu[ComputadoraBuscada].clave) {
					printf("\nLa computadora buscada está agotada\n\n");
					system("pause");
					}
					
					
				
			break;
			
			case 5:
					printf("\nNos vemos\n");
				break;
			}
		}while(opcion!=5);
	return 0;
}
