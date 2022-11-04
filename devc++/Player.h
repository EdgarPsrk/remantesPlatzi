#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();

        void callInput();
        void resetToSafePosition();

        //no hacer esto
        int x, y;

        int lastX, lastY;

        //virtual ~Player();

    protected:
      //int x, y;

    private:
};

#endif // PLAYER_H
