#include <iostream>
using namespace std;

void message()
 {
  std::cout << "the life is good, you are alive" << "\n\n";
  std::cout << "you are incredible" << '\n';
  std::cout << "today is a good day" << '\n';
 }
 bool dead(int hp)
  {
    if (hp <= 0)
     {
      return true;
     }
    else
     {
       return false;
     }
  }

int main()
 {
  int codigo;
  std::cout << "Ejecutar el codigo de mate y biology, oprime 1" << "\n\n";
  std::cout << "Ejecutar el codigo funciones, oprime 2" << "\n\n";
  std::cin >> codigo;
  switch (codigo)
   {
    case 1:
    float math, biology;
    std::cout << "Cuanto sacaste en matematicas" << '\n';
    std::cin >> math;
    std::cout << "Cuantos sacaste en biologia" << '\n';
    std::cin >> biology;

    if( math > 6)
     {
     std::cout << "Aprobaste matematicas, felicidades '\n' Sigue aprendiendo!!" << "\n\n";
   }
    else
     {
      std::cout << "Reprobaste la materia, lo siento." << '\n';
      std::cout << "Esfuerzate mas." << "\n\n";
    }

    if(biology > 7)
     {
       std::cout << "Aprobaste biologia, felicidades. '\n' Sigue aprendiendo!!" << "\n\n";
     }
    else
     {
        std::cout << "Reprobaste la materia, lo siento." << '\n';
        std::cout << "Esfuerzate mas." << "\n\n";
      }


      break;

      case 2:
      int life;
      std::cout << "Dame un numero" << '\n';
      std::cin >> life;
      if(dead(life))
       {
         std::cout << "Game Over" << '\n';
       }
       else
        {
          message();
        }

      break;

    }


  return 0;
 }
