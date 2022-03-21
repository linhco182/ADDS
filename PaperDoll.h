#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include "Computer.h"

#include <array>


class PaperDoll : public Computer{
public:
    PaperDoll();
    virtual char makeMove();
    void reset();
private:
    int count;
    std::array <char,3> moves = {'P','S','S'};
    
};
#endif
