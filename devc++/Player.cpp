#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}

void Player :: callInput()
 {
   //cout << "Comenzemos!!" << endl;
   int userInput;
   cin >> userInput;
   switch (userInput)
    {
     case 4:
     lastY = y;
     y = y - 1;
     break;

     case 2:
     lastX = x;
     x = x + 1;
     break;

     case 8:
     lastX = x;
     x = x - 1;
     break;

     case 6:
     lastY = y;
     y = y + 1;
     break;
    }
    cout << "Mi jugador esta en las cordenadas: " << x << ',' << y << endl;

 }



void Player :: resetToSafePosition()
{
  x = lastX;
  y = lastY;
}
