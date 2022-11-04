#include <stdio.h>
#include <stdlib.h>

typedef struct Node
 {
   int number;
   struct Node * next;
 } NODE;

 NODE * createNode( int number )
  {
    NODE * newNode;
    newNode = malloc(sizeof(NODE));
    newNode->next = NULL;
    newNode->number = number;
    return newNode;
  }

  NODE * deletNode(int number)
   {
     NODE * eraseNode;
     eraseNode = malloc(sizeof(NODE));
     eraseNode->next = NULL;
     eraseNode->number = number;
     return eraseNode;
   }



  int main(int argc, const char * argv[] )
   {
     NODE * current, * liberacion, * actual, * list,  * start = NULL;
     char goOn;
     int number, listSize = 0;

     do
      {
        printf("Teclee 0 para finalizar\n");
        printf("La lista contiene %d nodos. Ingrese el siguiente numero\n", listSize);
        scanf("%d", &number);
         if (number)
          {
            if (!start)
             {
              start = createNode(number);
             }
             else
              {
                current = start;
                while (current->next)
                 {
                  current = current->next;
                 }
                 current->next = createNode(number);
              }
            goOn = 1;
            listSize++;
          }
          else
           {
             goOn = 0;
           }
      } while(goOn);

   current = start;
   printf("La lista contiene los numeros : \n");
   while (current)
    {
     printf("%d", current->number);
     printf(current->next ? "," : "\n");
     current = current->next;
    }

    do
     {
       printf("Teclee 0 para finalizar\n");
       printf("La lista contiene %d nodos. Ingrese el nodo a borar\n", listSize);
       scanf("%d", &number);
        if (number)
         {
           if (!start)
            {
             current = start;
             if(number == current->number)
              {
                current = current->next;
                current = start;
              }
             else
              {
                actual = current
                current = current->next;
                while (current->next)
                 {
                  if(number == current->number)
                   {

                   }
                  else
                   {
                    current = current->next;
                   }
                  //current = start;
                 }
               }
               //current = start;
               goOn = 1;
               listSize--;
             }
           }
        else
         {
          goOn = 0;
         }
     } while(goOn);

  current = start;
  printf("La lista contiene los numeros : \n");
  while (current)
   {
    printf("%d", current->number);
    printf(current->next ? "," : "\n");
    current = current->next;
   }




    current = start;
    //printf("La lista contiene los numeros : \n");
    while (current)
     {
      liberacion = current->next;
      free(current);
      current = liberacion;
      /*printf("%d", current->number);
      printf(current->next ? "," : "\n");
      current = current->next;*/
     }
    return 0;
  }
