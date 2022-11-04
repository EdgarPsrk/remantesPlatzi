#include <stdio.h>
#include <locale.h>

struct Alumno{
	char NumeroCuenta[10], Nombre[50];
	char Apellido1[50];
	char Apellido2[50];
	int Edad;
	float Promedio;
	double sueldo;
};

struct Profesor{
	char NumeroTrabajador[7], Nombre[50];
	char Apellido1[50];
	char Apellido2[50];
	int Antiguedad;
	int Eficiencia;
	double sueldo;
};


int main(){
	setlocale(LC_CTYPE, "Spanish");
	struct Alumno Juan, Veronica, Luis, Pepe;
	struct Alumno AlumnosMAC[400];
	float suma;
	
	Juan.Edad=15;
	Veronica.Promedio=8.9;
	
	AlumnosMAC[10].Edad=37;
	
	gets(AlumnosMAC[30].Nombre);
	
	printf("El apellido 1 del alumno 15 es %s", AlumnosMAC[15].Apellido1);
	
	suma=Juan.Promedio + Pepe.Promedio;

	Juan.sueldo=150000;
	
	scanf("%d", &Juan.Edad);
	
}


float CalculaSueldo(){
	struct Alumno AlumnoBecado;
	struct Profesor ProfeJulio;
	
	AlumnoBecado.sueldo=500;
	ProfeJulio.Antiguedad=25;
	
}
