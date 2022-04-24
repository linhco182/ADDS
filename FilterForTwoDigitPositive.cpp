#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int integer){
    if (integer>9){
        return true;
    }else{
        return false;
    }
}