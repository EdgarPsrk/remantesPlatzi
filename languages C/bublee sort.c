#include <stdio.h>

void cambioPos(int * n1, int * n2)
 {
   int temp = * n1;
   * n1 = * n2;
   * n2 = temp;
 }

 void bubleSort(int vectorEn[], int n)
  {

    for(int i = 0; i < n -1; i++)
     {
       for(int j = 0; j < n -i -1; j++)
        {
          if(vectorEn[j] > vectorEn[j +1])
           {
             cambioPos(&vectorEn[j], &vectorEn[j +1]);
           }
        }
     }
  }

int printArray(int vectorEn[], int n)
 {

   for(int i = 0; i < n; i++)
    {
      printf("%d, ", vectorEn[i]);
    }
    printf("\nFin de ordenamiento" );
 }

 int main()
  {
    int vectorEn[] = {100, 192, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(vectorEn) / sizeof(vectorEn[0]);
    bubleSort(vectorEn, n);
    printArray(vectorEn, n);
    //printf("\n");

    return 0;
  }
