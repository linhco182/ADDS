#ifndef FILTERODD_H
#define FILTERODD_H
#include "FilterGeneric.h"

class FilterOdd: public FilterGeneric{
private:
    virtual bool g(int integer);
};
#endif