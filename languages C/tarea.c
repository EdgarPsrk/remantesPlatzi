#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
 {
     int nombre[10];
     int name[10];
     printf("Escribe un nombre por favor: \n");
     scanf("%s", &name);
     printf ("el nombre es: %s\n\n", name);
     printf("Por favor, escribe otro nombre: \n");
     scanf("%s", &nombre);
     printf ("el nombre es: %s\n\n", nombre);

     if ( name < nombre)
     {
         printf("%s es mas grande que %s", nombre, name);
     }
     else
     {
       printf("%s s mas grande que %s", name, nombre);

     }



     return 0;
 }
