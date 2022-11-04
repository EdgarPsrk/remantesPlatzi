#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct Auto{
	char Marca[50], Color[15];
	int Modelo, NumeroCilindros;
	float Rendimiento;
}UberJuan;  //Se delcara la variable al mismo tiempo (global)

//No permite declarar variables (no tiene nombre)
struct{
	int a;
	float b;
	double c;
}Dato1, Dato2;

void ImprimeAuto(struct Auto A){
	printf("\nMarca: %s", A.Marca);
	printf("\nModelo: %d", A.Modelo);
	printf("\nColor: %s", A.Color);
	printf("\nCilindros: %d", A.NumeroCilindros);
	printf("\nRendimiento: %f\n\n", A.Rendimiento);
	system("pause");
}

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int x=5;
	struct Auto Autopersona1;
	struct Auto AutoMama={"Ford", "Blanco", 2020, 4, 18.0};
	
	printf("Marca: %s\n", AutoMama.Marca);
	
	ImprimeAuto(AutoMama);
	
	Autopersona1.Modelo=2020;
	UberJuan.Rendimiento=15.9;
	
	Dato1.a=3;
	Dato1.b=4;
	Dato1.c=10;
	
	Dato2.a=3;
}

float FuncionA(){
	
	UberJuan.Modelo=2021;
	static x=5;
	
	scanf("%d", &x);
}


	
	
