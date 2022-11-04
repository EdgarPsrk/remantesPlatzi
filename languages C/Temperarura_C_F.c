#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main()
 {
   int contador, apoyos, save, ocacional, ultima;
   for(int i = 0; i < 9; i++)
    {
      contador = pown(2, i);
      printf("Este es 2 elevado %i: \n", i );
    }

   return 0;
 }


 /*float celsius, fahrenheit, conversorC, conversorF, decimalC, decimalF;
 printf("Convertiremos de grados fahrenheit a celsius.\n");
 printf("proporcioname una temperatura en grados fahrenheit.\n");
 scanf("%f", &fahrenheit);

 decimalC= (float)5 / (float)9;
 decimalF= (float)9 / (float)5;

 conversorC = ( fahrenheit - 32 ) * decimalC;
 conversorF = ( decimalF * celsius ) + 32;
 printf("La temperatura fahrenheit es: %.2f\n", conversorC);

 //Aquicomienza otro codigo
 scanf("%i", &altura);

 pi = 3.14159;
 radio *= radio;
 printf("El radri cuadrado es: %i\n",radio );
 area = pi * radio;
 volumen = area * altura;

 printf("El area de la circunferencia es: %.2f\n", area);
 printf("El voumen del cilindro es: %.2f\n", volumen);*/
