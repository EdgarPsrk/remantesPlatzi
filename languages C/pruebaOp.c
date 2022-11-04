#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Game(int numeroUsuario)
 {
   srand(time(NULL));
   int a, b, c, d;
   a = rand() % 10;
   b = (rand() % 10) +1;
   c= rand() % (10 + 1);

   d = a - b + c;
   int numeroAleatorio = rand() % d;


   if(numeroUsuario == numeroAleatorio)
    {
      printf("Muy bien, adiviniste\n" );
    }
   else
    {
      printf("Naam, el  numero era %i\n", numeroAleatorio );
    }

 }


void Menu(int it)
 {
   int numeroUsuario, inicio;
   printf("Juguemos\n");
   printf("Cuantas veces quieres jugar?\n");

   scanf("%i",&inicio);

   while(it < inicio)
    {
      printf("dime un numero entre 1 y 10 : \n");
      scanf("%i", &numeroUsuario);
      Game(numeroUsuario);
      it++;
    }
 }


void Cat()
 {
  int iterador = 0;
  while(iterador < 6)
   {
     printf("#\n");
     iterador++;
   }
 }

int main()
 {
  int desicion, it = 0;
  printf("Quieres jugar oprime 1\n" );
  printf("Quieres imprimir gatos oprime 2\n" );
  scanf("%i",&desicion );
  switch (desicion)
   {
    case 1:
     Menu(it);
    break;

    case 2:
     Cat();
    break;

    default:
    printf("Error no elegiste nada.\n");
    break;
   }

  return 0;
 }
