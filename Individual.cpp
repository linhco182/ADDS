#include "Individual.h"
#include <string>
#include <stdlib.h>

Individual::Individual(){
    
}

Individual::Individual(int length){
    binaryString.assign(length,'0');
}

Individual::Individual(std::string binary){
    binaryString = binary;
}

std::string Individual::getString(){
    return binaryString;
}

int Individual::getBit(int pos){
    if (pos>=0 && pos<binaryString.length()){
        int number = binaryString.at(pos);
        return number;
    }
    else{
        return -1;
    }
}

void Individual::flipBit(int pos){
    if (pos>=0 && pos<binaryString.length()){
        if (binaryString.at(pos)=='0'){
            binaryString.replace(pos, 1, "1");
        }else{
            binaryString.replace(pos, 1, "0");
        }
    }
}

int Individual::getMaxOnes(){
    int max = 0;
    int count=0;
    for(int i = 0; i < binaryString.length(); i++){
        if(binaryString.at(i)=='1'){
            count++;
        }else{
            count=0;
        }
        if (count>max){
            max=count;
        }
    }
    return max;
}

int Individual::getLength(){
    return binaryString.length();
}