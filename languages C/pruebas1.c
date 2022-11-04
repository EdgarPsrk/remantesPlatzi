#include <stdio.h>

int arr[20];

int main()
{
  int n,i;
  printf("Dime de que tamano sera el arreglo\n");
  scanf("%d", &n);
  //printf("esto es n: %d", n);
  printf("Dime los elementos: \n");
  for(i = 0; i < n; i++)
   {
     scanf("%d", &arr[i]);
     //printf("%d", arr[i]);
   }
  //mergeSort(arr, 0, n - 1);
   printf("esto es n: %d\n", n);
   printf("arreglo ordenado:\n");
   //printf("esto es n: %d", n);
   for( i = 0; i < n; i++)
    {
      printf("%d\n", arr[i]);
    }

    return 0;
}
