#include "FilterOdd.h"

bool FilterOdd::g(int integer){
    if (integer%2==1){
        return true;
    }else{
        return false;
    }
}