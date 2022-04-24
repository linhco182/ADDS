#include "MapGeneric.h"


std::vector<int> MapGeneric::map(std::vector<int> input){
    std::vector<int> newVector;

    if (input.size()==1){
        newVector.push_back(f(input.back()));
        
    }else{
        int lastInt=f(input.back());
        newVector=input;
        newVector.pop_back();
        newVector=map(newVector);
        newVector.push_back(lastInt);
    }

    return newVector;
}

