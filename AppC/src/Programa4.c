#include <stdio.h>
#include <locale.h>

struct Alumno {
     char NumeroCuenta[10];
     char Nombre[30];
     float Promedio;		
};


int main(){
	setlocale(LC_CTYPE, "Spanish");
	struct Alumno AlumnosProgramacion[40];
	int Cantidad;
	int i;
	
	printf("¿Cuántos alumnos (a lo más 40)? ");
	scanf("%d", &Cantidad);
	
	for(i=0;i<Cantidad;i++) {
	     printf("\nAlumno %d --------------------------------\n", i+1);
	     printf("Numero de cuenta: ");
	     
	     fflush(stdin); //Limpia buffer de entrada
	     gets(AlumnosProgramacion[i].NumeroCuenta);
	     
	     printf("Nombre: ");
	     
	     fflush(stdin);
	     gets(AlumnosProgramacion[i].Nombre);
	     
	     printf("Promedio: ");
	     scanf("%f", &AlumnosProgramacion[i].Promedio);
	}
}
