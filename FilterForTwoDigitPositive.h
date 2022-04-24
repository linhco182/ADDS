#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric{
private:
    virtual bool g(int integer);
};
#endif