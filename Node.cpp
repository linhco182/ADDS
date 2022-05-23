#include "Node.h"
#include <iostream>

Node::Node(){
    data=0;
    next=NULL;
}
 
int Node::getData(){
    return data;
} 

void Node::setData(int input){
    data=input;
}

Node* Node::getNext(){
    return next;
}

void Node::setNext(Node* input){
    next=input;
}