#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
   int guardar[10];

   printf("Transformemos de binaro a decimal.\n");
   printf("Ingresa el numero binario con los 8 digitos. \n");
   for(int i = 0; i < 8; i++)
    {
      scanf("%i", &guardar[i]);
    }
    printf("Este es tu numero\n");
    for(int i = 0; i < 8; i++)
     {
       printf("%i", guardar[i]);
     }
 }
