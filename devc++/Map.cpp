#include <iostream>
using namespace std;

void drawMap(int heroPosx, int heroPosy, char gameMap[10][10])
 {
   for(int i = 0; i < 10; i++)
    {
      for (int p = 0; p < 10; p++)
       {

       if(i != heroPosx )
        {
        cout << gameMap[p][i];
        }
       else if( p != heroPosy)
        {
          cout << gameMap[p][i];
        }
        else
        {
          cout << 'H';
        }

      }
      cout << '\n';
    }

 }


void Move(bool gameOver, char input, int posX, int posY, char gameMap[10][10])
 {

   while(gameOver)
    {
      cin >> input;
      cout << '\n';
      if(input == '2')
       {
         posX = posX + 1;
       }
      else if(input == '5')
       {
         posX = posX - 1;
       }
       else if(input == '6')

        {
          posY = posY + 1;
        }
        else if(input == '4')
         {
           posY = posY - 1;
         }
      else
       {
         gameOver = false;
       }
      drawMap(posX, posY, gameMap);
      cout << '\n';
    }

 }


 int main()
  {
    int Posx = 0;
    int Posy = 0;
    bool End = true;
    char Input = ' ';
    char Map[10][10] = {

                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
                       { '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'}

                     };

    cout << "arriba = 5, abajo = 2, derecha = 6, izquierda = 4"  << endl;

    drawMap(Posx, Posy, Map);
    cout << '\n';
    Move(End, Input, Posx, Posy, Map);

    return 0;
  }
