#include <iostream>
#include "Player.h"
#include "Player.cpp"
#include "MapCell.h"
#include "MapCell.cpp"
#include "GameMapit.h"
#include "GameMapit.cpp"


using namespace std;

int main()
 {
   //Player Hero;
   //bool isGameOver = false;
   GameMapit Map;
   Player Hero;

   Map.drawIntro();
   Map.DrawM();
   //cout << "Comenzemos!!" << endl;

   while(Map.isGameOver == false)
    {
      cout << "Introduce un movimiento 2,6,4,8" << endl;
      //aqui esta el loop del game
      Hero.callInput();

      //actualizacion el jugador en el mapa
      if(Map.setPlayerCell(Hero.x, Hero.y))
       {
         //aqui dibujamos mapa
         Map.DrawM();
       }
      else
       {
         Hero.resetToSafePosition();
         //aqui dibujamos mapa
         Map.DrawM();
       }

    }

   return 0;

 }
