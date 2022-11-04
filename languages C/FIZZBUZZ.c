#include <stdio.h>
C:\Users\nueva\Desktop\docUni\devc++\CodeBlocks\MinGW\bin
C:\Users\nueva\Desktop\archivos relacionados a la uni\devc++\CodeBlocks\MinGw\bin

/*int main()
{
  for(int i = 1; i < 101; i++)
   {
     if(i % 3 && i % 5)
     {
         printf("%d\n", i);
     }
     else if(! (i % 3) )
     {

       if(! (i % 5) )
       {
         printf("%d FIZZBUZZ\n", i);
       }
       else
       {
         printf("%d FIZZ\n", i);
       }

     }
     else if(!(i % 5))
     {
       if(! (i % 3) )
       {
         printf("%d FIZZBUZZ\n", i);
       }
       else
       {
         printf("%d BUZZ\n", i);
       }
     }

   }

   return 0;
}*/

#include <stdio.h>

void fizz(int i)
{
  if(! (i % 5) )
  {
    printf("%d FIZZBUZZ\n", i);
  }
  else
  {
    printf("%d FIZZ\n", i);
  }
}

void buzz(int i)
{
  if(! (i % 3) )
  {
    printf("%d FIZZBUZZ\n", i);
  }
  else
  {
    printf("%d BUZZ\n", i);
  }
}

int main()
{
  for(int i = 1; i < 101; i++)
   {
     if(i % 3 && i % 5)
     {
       printf("%d\n", i);
     }
     else if(! (i % 3) )
     {
       fizz(i);
     }
     else if(!(i % 5))
     {
      buzz(i);
     }

   }

   return 0;
}
