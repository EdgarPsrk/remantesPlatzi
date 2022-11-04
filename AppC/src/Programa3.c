#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct NumeroComplejo{
	float Real, Imaginaria;
};

struct NumeroComplejo LecturaNumero (){
	struct NumeroComplejo Numero;
	
	printf("\nLectura de n�meros complejos:\n ");
	
	printf("\n\n�Cu�l es la parte real? ");
	scanf("%f", &Numero.Real); 
	printf("�Cu�l es la parte imaginaria? ");
	scanf("%f", &Numero.Imaginaria); 
	
	return Numero;
}


void EscribeNumero(struct NumeroComplejo Numero){
	
	if (Numero.Imaginaria<0)
		printf("\n%g %gi\n ",Numero.Real, Numero.Imaginaria);
	else
		printf("\n%g + %gi\n ",Numero.Real, Numero.Imaginaria);
}

void Suma (struct NumeroComplejo A, struct NumeroComplejo B){
	struct NumeroComplejo Resultado;
	
	Resultado.Real=A.Real+B.Real;
	Resultado.Imaginaria=A.Imaginaria+B.Imaginaria;
	EscribeNumero(Resultado);
	printf("\n");
	system("pause");
}

void Resta(struct NumeroComplejo A, struct NumeroComplejo B){
	struct NumeroComplejo Resultado;
	
	Resultado.Real=A.Real-B.Real;
	Resultado.Imaginaria=A.Imaginaria-B.Imaginaria;
	EscribeNumero(Resultado);
	printf("\n");
	system("pause");
}

void Multiplicacion(struct NumeroComplejo A, struct NumeroComplejo B){
	struct NumeroComplejo Resultado;
	
	Resultado.Real=A.Real*B.Real - A.Imaginaria*B.Imaginaria;
	Resultado.Imaginaria=A.Real*B.Imaginaria + A.Imaginaria*B.Real;
	EscribeNumero(Resultado);
	printf("\n");
	system("pause");
}

void Division(struct NumeroComplejo A, struct NumeroComplejo B){
	struct NumeroComplejo Resultado;
	
	Resultado.Real=(A.Real*B.Real + A.Imaginaria*B.Imaginaria)/(B.Real*B.Real+B.Imaginaria*B.Imaginaria);
	Resultado.Imaginaria=(A.Imaginaria*B.Real - A.Real*B.Imaginaria)/(B.Real*B.Real+B.Imaginaria*B.Imaginaria);
	EscribeNumero(Resultado);
	printf("\n");
	system("pause");
}

int menu (){
	int opcion;
	printf("\nOPERACIONES CON CMPLEJOS\n");
	printf("\n1. Lectura de n�meros\n");
	printf("\n2. Suma\n");
	printf("\n3. Resta\n");
	printf("\n4. Multiplicaci�n\n");
	printf("\n5. Divisi�n\n");
	printf("\n6. Salir\n");
	
	do{
		printf("\n\nOpci�n: ");
		scanf("%i", &opcion);
	}while(opcion<1 || opcion>6);
	
	return opcion;
}

int main(){
	setlocale(LC_CTYPE, "Spanish");
	struct NumeroComplejo Numero1, Numero2;
	int opcion;
	
	do{	
		system("cls");
		opcion=menu();
		
		switch (opcion){
			case 1:
				Numero1= LecturaNumero();
				Numero2= LecturaNumero();
				break; 	
			case 2:
				Suma(Numero1, Numero2);
				break;
			case 3:
				Resta(Numero1, Numero2);
				break;
			case 4:
				Multiplicacion(Numero1, Numero2);
				break;
			case 5:
				Division(Numero1, Numero2);
				break;
				
			case 6:
				printf("\n\nAdi�s");
		}
	}while(opcion != 6);
	
}
