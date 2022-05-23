#include "Node.h"
#include <iostream>
#include "LinkedList.h"
#include <vector>


int main(){
    std::string input = "5 2 7 10 AP 3 9";
    std::array<int,100> numArray;
    std::vector<int> params;
    std::string code;
    std::string number;
    int sLength = input.length();
    int Pos;
    int index = 0;
    for(int i = 0; i < input.length();i++){
        if(isalpha(input[i])){
            code.push_back(input[i]);
            Pos = i;
        }
    }
    int pointA = 0;
    for (int i = 0; i < sLength; i++ ){


        if (input[i]==' '){
            for(int j = pointA; j < i; j++){
                number.push_back(input[j]);
                
            }
            pointA = i;

            numArray[index]=stoi(number);
            index++;
            number.clear();
        }
        if(isalpha(input[i])){
            break;
        }

    }
    pointA = 0;
    for(int i = Pos+1; i< sLength; i++){
        if (input[i]==' '){
            for(int j = pointA; j < i; j++){
                number.push_back(input[j]);
                
            }
            pointA = i;
            params.push_back(stoi(number));
            number.clear();
        }
    }
    for(int i = pointA; i< sLength; i++){
        number.push_back(input[i]);
    }
    params.push_back(stoi(number));
            number.clear();




    std::cout<< code<<std::endl;


    int * ptr = &numArray[0];
    LinkedList list1 = LinkedList(ptr,index);

    if(code=="AF"){
        list1.addFront(params[1]);
    }
    if(code=="AE"){
        list1.addEnd(params[1]);
    }
    if(code=="AP"){
        list1.addAtPosition(params[1],params[2]);
    }
    if(code=="S"){
        list1.search(params[1]);
    }
    if(code=="DF"){
        list1.deleteFront();
    }
    if(code=="DE"){
        list1.deleteEnd();
    }
    if(code=="DP"){
        list1.deletePosition(params[1]);
    }
    if(code=="GI"){
        list1.getItem(params[1]);
    }

    list1.printItems();






    return 0;
}