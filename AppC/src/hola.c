1#include <stdio.h>
#include <math.h>
#define BASE 2
#define BIN 1
int contador [10], decimal = 0, redundante;

void Binario()
{
    //int contador [10], decimal = 0, redundante;
    //const int base = 2;

    printf("Ingresa tu numero del ultimo digito al primero\n");
    printf("NOTA: El ultimo que debes ingresar es aquel cuya poscision es igual a 128\n");
    printf("NOTA: Presiona enter despues de cada digito\n");


    for(int i = 0; i < 8; i++)
    {
        scanf("%i", &contador[i]);
    }

    printf("este es tu numero: \n");

    for(int i = 7; i > -1; i--)
    {
        printf("%i", contador[i]);
    }
    printf("\n");

    for (int i = 0; i < 8; i++)
    {
        if (contador[i])
        {
            redundante = pow(BASE, i);
            decimal += redundante;
        }
    }
    printf("Esto vale tu numero en decimal: %d\n\n", decimal);

}

void Decimal()
{
  int iterador = 0;
  printf("Convirtamos decimal a binario de 1 Byte\n");
  printf("Ingresa tu numero decimal\n");
  scanf("%i", &decimal);
 while (iterador < 8)
 {
      for(int i = 7; i > -1; i--)
  {
      redundante = pow(BASE, i);
      //printf("redubdabrte vale: %i\n", redundante);
      if( redundante > decimal )
      {
        contador[iterador] = 0;
      }
      else
      {
          //contador[iterador] = 0;
          decimal -= redundante;
          //printf("(decimal vale: %i)\n", decimal);
          contador[iterador] = BIN;
      }
      iterador++;
  }

 }

 printf("Este es tu numero en binario: ");
 for(int i = 0; i < 8; i ++)
 {
     printf(" %i", contador[i]);
 }
 printf("\n\n");

}

int main()
{
 int opcion;
 printf("Bienvenido\n");
 //printf("Convertir de binario a decimal\n1\nConvertir de decimal a binario\n2\n");
 printf("Teclea 0 para salir\n");
 scanf("%i", &opcion);
 while (opcion)
  {
    printf("Convertir de binario a decimal\n1\nConvertir de decimal a binario\n2\n");
    //printf("Teclea 0 para salir\n");
    scanf("%i", &opcion);
   switch (opcion)
    {
     case 0:
     printf("hasta luego\n");
     break;

     case 1:
     Binario();
     break;

     case 2:
     Decimal();
     break;

     default :
     printf("Opcion no valida\n");
     break;
    }
  }
/*switch (redundante)
 {
  case 1:
  Binario();
  break;

  case 2:
  Decimal();
  break;

  default :
  printf("Opcion no valida\n");
  break;
}*/

  return 0;
}
