#include "ReduceGeneric.h"

int ReduceGeneric::reduce(std::vector<int> input){
    int fint, lint;
    std::vector<int> newVector;
    if (input.size()==1){
        return input.front();
    }
    if (input.size()==2){
        fint=input.front();
        lint=input.back();

    }else{
        lint=input.back();
        newVector=input;
        newVector.pop_back();
        fint = reduce(newVector);
    }
    return binaryOperations(fint,lint);
}

int ReduceGeneric::binaryOperations(int int1, int int2){
    if (int1>int2){
        return int2;
    }else{
        return int1;
    }
}