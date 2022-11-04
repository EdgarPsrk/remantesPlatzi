class Dog
 {
 public:

   Dog(string Name, string BarkType)
    {
      Nombre = Name;
      Ruido = BarkType;
    }

    string GetName()
     {
       return Nombre;
     }

     void setName(string NewName)
      {
        Nombre = NewName;
      }

      void Bark()
       {
         cout << "dice: " << Ruido << endl;
       }

  private:

    string Nombre;
    string Ruido;
 };

 int main ()
  {
    Dog Uno("Woofers", "Berk");
    Uno.setName("Pimiento");

    Dog Dos("Canela", "Grrr");

    cout << Uno.GetName() << endl;
    Uno.Bark();

    cout << Dos.GetName() << endl;
    Dos.Bark();


    return 0;
  }



/*#include <iostream>
using namespace std;
int main()
{
int binario [8];
int decimal, desicion,contador;
std::cout << "Bienvenido" << '\n';
std::cout << "Si tienes un binario oprime 1" << '\n';
std::cout << "Si tienes un decimal oprime 2" << '\n';
std::cin >> desicion;

if (desicion == 1)
 {
   std::cout << "Digita tu numero (con las 8 posiciones):" << '\n';
   //std::cin >> &binario [];
   //std::cout << "tu numero es:" << binario [];
   //while()

 }
else
 {
   std::cout << "Digita tu numero: " << '\n';
   std::cin >> decimal;
   while(decimal)
    {
      contador = decimal % 2;
      if(contador)
       {

       }
    }

 }

}*/
