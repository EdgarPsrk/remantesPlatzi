#include <iostream>
#include <fstream>

using namespace std;

int main()
 {
   ofstream Myfile("Gamedata.txt");
   string playerName = " ";

  if( Myfile.is_open () )
    {
      Myfile << "hola Platzi!" << endl;
      cout << "Dime cual es tu nombre?" << '\n';
      cin >> playerName;
      Myfile << "Mi nombre es: " << endl;
      Myfile << playerName << endl;
    }


    Myfile.close ();

   ifstream Myread("Gamedata.txt");
   string line;
   string nombreDeHeroe = " ";
   int renglon = 0;

    if( Myread.is_open() )
     {
       while( getline(Myread, line) )
        {
          //renglon ++;

          if(renglon == 2)
           {
             nombreDeHeroe = line;
           }
           renglon++;

        }
     }
     else
      {
        cout << "No puedo abrir e archivo" << endl;
      }
      cout << "\n\n" << "Bienvenido" << endl;
      cout << nombreDeHeroe << endl;

     return  0;
 }
