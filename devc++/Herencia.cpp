#include <iostream>

using namespace std;

class Mage
 {
 public:
   int mana, hp, power;

   Mage(int Mana, int Hp, int Power)
    {
      mana = Mana;
      hp = Hp;
      power = Power;
    }

    void Spell()
     {
       cout << "FireQWorks!! " << power << '\n';
       //cout << power << endl;
     }
 };

 class iceMage : public Mage
  {
  public:
    iceMage(int Mana, int Hp, int Power) : Mage(Mana, Hp, Power)
     {
       mana = Mana;
       hp = Hp;
       power = Power + 10;
     }
  };

  int main()
   {
     Mage Erre(10, 20, 30);
     cout << "Muere " ;
     Erre.Spell();
     iceMage XDas(10, 20, 30);
     cout << "No sera asi " ;
     XDas.Spell();

     return 0;

   }
