#include <iostream>
#include <string>
#include <vector>
#include "ReduceGeneric.h"
#include "ReduceGCD.h"
using namespace std;

int main(){
    vector<int> vect{ 21, 28, -70, 0 };

    ReduceGCD mapfunc = ReduceGCD();

    int x = mapfunc.reduce(vect);

    std::cout<<x;
    return 0;
}