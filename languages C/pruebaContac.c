#include <stdio.h>
int main()
 {
   int a,b,c;
   printf ("Dame un numero: ");
   scanf("%d", &a);
   printf ("Dame un numero: ");
   scanf("%d", &b);
   printf ("Dame un numero: ");
   scanf("%d", &c);
   printf("Los valores son: %d, %d, %d\n", a, b, c);
   if (a != 0)
    {
      printf("ganaste : %d\n", b);
    }
   else
    {
      printf("ganaste : %d\n", c);
    }
 }
