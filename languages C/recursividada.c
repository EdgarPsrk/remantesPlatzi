#include <stdio.h>


long result;
int n;
long factorial(int n)
 {
   if(n ==0)
    {
      return 1;
    }
   else
    {
      return(n * factorial(n -1));
    }
 }

 void Factorial(int n)
  {
    if(n < 0)
     {
       printf("El numero deve ser positvo\n");
     }
    else
     {
       result = factorial(n);
       printf("%ld! = %d\n", n, result);
     }
  }

 int main()
  {
    int a;
    printf("Ingresa 1, 2 o 0 para salir\n");
    scanf("%d",&a );
  switch (a)
   {
    case 1:
    printf("ingresa el numero a calcular\n");
    scanf("%d", &n);
    Factorial(n);
    break;

    case 2:
    printf("Me dio flojera hacer mas casos.\n");
    break;

    default:
    return 0;
    break;

    }

    return 0;
  }
