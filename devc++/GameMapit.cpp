#include "GameMapit.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMapit::GameMapit()
{
    PlayerCell = NULL;
    loadMapFromFile();
    isGameOver = false;
}

void GameMapit::DrawM()
 {
   for(int i = 0; i < 15; i++)
    {
       for(int p = 0; p < 10; p++)
        {
          cout << cells[i][p].id;
        }
        cout << endl;
    }
 }

bool GameMapit::setPlayerCell(int playerX, int playerY)
 {
   if(cells[playerX][playerY].isBlocked() == false)
    {
      if(cells[playerX][playerY].id == '$')
       {
         drawVictory();
         isGameOver = true;
         return true;
       }
      else
       {
         if(PlayerCell != NULL)
          {
            PlayerCell->id = 0;
          }
          PlayerCell = &cells[playerX][playerY];
          PlayerCell -> id = '3';
       }

       return true;
    }
   else
    {
      return false;
    }


 }

 void GameMapit :: drawIntro()
  {
    string line;
    ifstream Myfile("Intro.txt");

    if(Myfile.is_open())
     {
       while(getline(Myfile, line))
        {
          cout << line << endl;
        }
        cin >> line;
     }
     else
      {
        cout << "FATAL ERROR. INTRO COULD  NOT BE LOADED!" << endl;
      }
  }

  void GameMapit :: drawVictory()
   {
     string line;
     ifstream Myfile("Victory.txt");

     if(Myfile.is_open())
      {
        while(getline(Myfile, line))
         {
           cout << line << endl;
         }
         cin >> line;
      }
      else
       {
         cout << "FATAL ERROR. VICTORY COULD  NOT BE LOADED! :(" << endl;
       }
   }

 void GameMapit::loadMapFromFile()
  {
    /*ofstream fileCReated("Map.txt");

    if(fileCReated.is_open())
     {

     }
     else
      {
       cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED" << endl;
     }*/

    string line;
    int row = 0;
    ifstream Myfile("Map.txt");
    if(Myfile.is_open())
     {

       while(getline(Myfile, line))
        {
          for(int p = 0; p < line.length(); p++)
           {
             if(line[p] == '0')

                cells[row][p].id = 0;

              else
               {
                cells[row][p].id = line[p];
               }

           }
          cout << line << endl;
          row ++;
        }


     }
     else
      {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED" <<endl;
      }
  }
