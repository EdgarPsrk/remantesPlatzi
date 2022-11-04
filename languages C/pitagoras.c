#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ( int argc, const char * argv[])
 {
   int a, b;
   printf ("Dame un numero\n");
   scanf("%d", &a);
   printf ("Dame otro numero\n");
   scanf("%d", &b);

   //a = atoi(argv[1]);
   //b = atoi(argv[2]);

   printf("La hipotenusa mide %.2f\n", sqrt(pow(a, 2) + pow(b, 2) ) );

   return 0;
 }
