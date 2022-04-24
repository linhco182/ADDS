#include "ReduceGCD.h"
#include "math.h"

int ReduceGCD::binaryOperations(int int1, int int2){
    int1=abs(int1);
    int2=abs(int2);
    if (int1==0){
        return int2;
    }
    if (int2==0){
        return int1;
    }
    if (int1==int2){
        return int2;
    }
    if (int1>int2){
        return binaryOperations(int1-int2,int2);
    }else{
        return binaryOperations(int1,int2-int1);
    }
}