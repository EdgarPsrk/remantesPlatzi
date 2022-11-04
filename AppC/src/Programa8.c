#include <stdio.h>
#include <locale.h>

enum Dias{
	Domingo=1,
	Lunes, Martes, Miercoles, Jueves, Viernes, Sabado
};

enum EstadoSalud{
	Sano, Enfermo, Muerto
};
int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	enum Dias dia, fecha;
	enum EstadoSalud Persona;
	float pago;
	
	for(dia=Domingo; dia<=Sabado; dia++){
		printf("%d \n", dia);
	}
	
	if(fecha==Domingo)
	pago=pago*3;
	
	//if(Persona=Muerto)
	//	DarDeBaja();
		
	printf("\nDía Miércoles: %d", Miercoles);
	printf("\nLa enumeración ocupa %d bytes", sizeof(dia));
	printf("\nDomingo ocupa %d bytes", sizeof(Domingo));
}
