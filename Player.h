#ifndef PLAYER_H
#define PLAYER_H

class Player{
    public:
        Player();
        virtual char makeMove();
        virtual void reset();
    private:
        int count;
};
#endif