#ifndef PLAYER_H
#define PLAYER_H

class Player{
    public:
        Player();
        virtual char makeMove();
        virtual void reset();
        virtual ~Player();
        int count;
};
#endif