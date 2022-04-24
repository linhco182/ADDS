#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int integer){
    if (integer>9){
        if (integer<100){
            return true;
        }
        else{
            return false;
        }
    }else{
        return false;
    }
}
