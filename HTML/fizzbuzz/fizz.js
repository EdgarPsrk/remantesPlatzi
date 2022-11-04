function divide(numerador, denominador)
 {
   if(numerador % denominador == 0)
    {
      return true;
    }
    else
     {
       return false;
     }
 }
 

for(i = 1; i<=100; i++)
 {
   if (divide(i,3))
    {
      document.write("fizz");
    }
    if (divide(i,5))
     {
       document.write("buzz");
     }
     if (!divide(i,3) && !divide(i,5))
      {
        document.write(i);
      }
      document.write("<br/>");
 }
