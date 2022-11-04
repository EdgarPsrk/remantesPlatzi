#ifndef GAMEMAPIT_H
#define GAMEMAPIT_H
#include "MapCell.h"

class GameMapit
{
    public:
        GameMapit();

        MapCell * PlayerCell;
        MapCell cells [15][10];

        void drawIntro();
        void drawVictory();
        void DrawM();
        //obtencion y actualizacion del Player
        bool setPlayerCell(int playerX, int playerY);
        bool isGameOver = false;

    protected:
      void loadMapFromFile();

    private:
};

#endif // GAMEMAPIT_H
