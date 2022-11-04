#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct client
 {
   char name[50];
   char id[10];
   float credit;
   char address[100];
 };

 
 int main(int argc, char const *argv[])
  {
   struct client client1 = {0};
   strcpy(client1.name, "Edgar Palomino");
   strcpy(client1.id, "0000000001");
   client1.credit = 100000;
   strcpy(client1.address, "Calle 1, Carrera 1 ciudad Bolivar");

   printf("The client Name is: %s\n", client1.name);
   printf("The client Id is: %s\n", client1.id);
   printf("The client Credit is: %.2f\n", client1.credit);
   printf("The client Address is: %s\n", client1.address);

   return 0;
  }
