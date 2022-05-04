#include <iostream>

int sumOfCube(int n){
    if(n<0){
        return -1;
    }
    if(n<2){
        return n;
    }

    return n*n*n+sumOfCube(n-1);
}