#include <stdio.h>
#include <locale.h>

//Tner cuidado porque la union encima los datos
union{
	int contador;
	float suma;
	int total, i;
	
	
}Variables;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int a=5, b=4;
	for(Variables.i=1; Variables.i<=10; Variables.i++){
		printf("\nNo debe correr");
	}
	
	Variables.suma=a+b;
	
	printf("\nLa suma es: %f", Variables.suma);
	
	printf("\nDame el total de la venta: ");
	scanf("%i", &Variables.total);
	
}
