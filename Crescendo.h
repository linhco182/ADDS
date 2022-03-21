#ifndef CRESCENDO_H
#define CRESCENDO_H

#include "Computer.h"

#include <array>


class Crescendo : public Computer{
public:
    Crescendo();
    virtual char makeMove();
    void reset();
private:
    int count;
    std::array <char,3> moves = {'P','S','R'};
    
};
#endif
