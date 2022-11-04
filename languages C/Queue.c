#include <stdio.h>
#define SIZE 5

int values[SIZE], front = - 1, rear = 0;

void enQueue(int value)
 {
  if(rear == SIZE )
   {
     printf("Nuestro Queue esta lleno\n");
   }
  else if(front == - 1)
   {
     front = 0;
     rear++;
     values[rear] = value;
     printf("Se inserto el valor %d correctamente\n", value);
   }
  else //if(front < 5)
   {
    //front ++;
    rear++;
    values[rear] = value;
    printf("Se inserto el valor %d correctamente\n", value);
    front ++;
   }
 }

void deQueue()
 {
   if(front == -1)
    {
      printf("Nuestro Queue esta vacio\n");
    }
   else
    {
      printf("Se elimimo el valor %d\n", values[front]);
      front--;
      if(front = 0)
       {
         front = rear = -1;
       }
    }
 }

int main()
 {
   /*enQueue(0);
   enQueue(1);
   enQueue(2);
   enQueue(3);
   enQueue(4);
   deQueue();
   deQueue();
   deQueue();
   deQueue();
   deQueue();*/


   for(int i = 0; i < 6; i++)
    {
      printf("valor = %d\n", values[i]);
    }



   return 0;
 }
