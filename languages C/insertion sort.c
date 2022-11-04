#include <stdio.h>
#include <math.h>

void insertionSort(int array[], int n)
 {
   int i, j, curentVal;
   for(i = 0; i < n; i++)
    {
      curentVal = array[i];
      j = i -1;
      while ( j >= 0 && array[j] > curentVal)
       {
        array[j +1] = array[j];
        j = j -1;
       }
       array[j +1] = curentVal;
    }
 }

 void printArray(int array[], int n)
  {
    for(int i = 0; i < n; i++)
     {
       printf("%d\n", array[i]);
     }
  }

  int main()
   {
     int array[] = {6, 4, 3, 11, 10};
     int n = sizeof(array) / sizeof (array[0]);
     insertionSort(array, n);
     printArray(array, n);

     return 0;
   }
