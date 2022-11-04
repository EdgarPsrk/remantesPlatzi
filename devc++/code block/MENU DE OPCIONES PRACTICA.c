#include<stdio.h>
#include<stdlib.h>
int main(void)
{
 float b=0, c=0;
 int a;

do
{
    system("cls");
    printf("Menu de opciones:\n\n");
    printf("1. Ingrese los datos\n");
    printf("2. Sumar\n");
    printf("3. Restar\n");
    printf("4. Multiplicar\n");
    printf("5. Dividir\n");
    printf("6. Salir\n");
    printf("Opcion  de escoger:");
    scanf("%d",&a);
    switch(a)
    {case 1:
        system("cls");
        printf("Ingrese el primer valor:\n");
         scanf("%f",&b);
         printf("Ingrese el segundo valor: \n");
         scanf("%f",&c);
         break;
     case 2:
         system("cls");
         printf("La suma de %.1f + %.1f es:\n %.1f",b,c, b+c);
         getch();
         break;
         case 3:
        system("cls");
         printf("La resta de %.1f - %.1f es:\n %.1f",b,c, b-c);
         getch();
         break;
         case 4:
            system("cls");
         printf("La multiplicacion de %.1f * %.1f es:\n  %.1f" ,b,c, b*c);
         getch();
         break;
         case 5:
            system("cls");
         printf("La divicion de %.1f / %.1f es:\n %.2f",b,c, b/c);
         getch();
         break;
         case 6:
             break;
         default:
             system ("cls");
             printf( "La opcion que ingreso es incorrecta");
             getch();
             break;
    }


         }while(a!=6);

         return 0;

}
