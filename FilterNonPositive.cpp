#include "FilterNonPositive.h"

bool FilterNonPositive::g(int integer){
    if (integer<1){
        return true;
    }else{
        return false;
    }
}