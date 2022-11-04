#include <iostream>
//#include "radio.cpp"

using namespace std;

class Human
 {
 public:
   Human(int spawnAge)
    {
      Age = spawnAge;
    }

    void Think()
     {
       cout << GetThinkMessage() << endl;
     }

     int Age;

   private:
     int SocialLevel, Intelengence, Luck;

     string GetThinkMessage()
      {
        if(SocialLevel + Luck > 100 )
         {
           return "Estoy teniendo pensamiento felices";
         }
         else if(Luck > Intelengence)
          {
            return "Soy un tipo con suerte!";
          }
          else if(Age > 18)
           {
             return "Soy pequeño";
           }
           else
            {
              return "No pienso nada";
            }
        }
 };

 int main()
  {
    Human Bob(19);

    Bob.Think();

    return 0;
  }
