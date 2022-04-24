#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int integer){
    if (integer>9 and interger<100){
        return true;
    }else{
        return false;
    }
}
