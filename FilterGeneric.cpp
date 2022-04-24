#include "FilterGeneric.h"
#include <iostream>

std::vector<int> FilterGeneric::filter(std::vector<int> input){
    std::vector<int> newVector;

    if (input.size()==1){
        if(g(input.back())=true){
             newVector.push_back(input.back());
        }
    }else{
        int lastInt=input.back();
        newVector=input;
        newVector.pop_back();
        newVector=filter(newVector);
        if(g(lastInt)==true){
            newVector.push_back(lastInt);
        }

    }
    return newVector;
}
