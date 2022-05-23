#include "LinkedList.h"
#include <iostream>
#include <limits>

void LinkedList::addFront(int newItem){
    Node* n = new Node();
    n->setData(newItem);
    n->setNext(head);
    head=n;
}

void LinkedList::addEnd(int newItem){
    Node* n = new Node();
    n->setData(newItem);
    Node* temp = head;
    while(temp->getNext()!=NULL){
        temp = temp->getNext();
    }
    temp->setNext(n);
}

LinkedList::LinkedList(){
    Node * n = new Node();
    head = n;
}

LinkedList::LinkedList(int * ptr, int size){
    Node *n = new Node();
    head = n;
    n->setData(*ptr);

    for(int i = 1; i < size; i++){
        addEnd(*(ptr+i));

    }
}

void LinkedList::printItems(){
    Node* temp = head;
    while(temp!=NULL){
        std::cout<<temp->getData()<<" ";
        temp=temp->getNext();
    }
}

void LinkedList::addAtPosition(int position, int newItem){
    if(position < 2){
        addFront(newItem);
    }else{
        Node * n = new Node();
        n->setData(newItem);
        Node * temp = head;
        for (int i = 1; i < position-1; i++){
            temp=temp->getNext();
            if(temp->getNext()==NULL){
                break;
            }
        }
        if(temp->getNext()!=NULL){
            Node* post = temp->getNext();
            temp->setNext(n);
            n->setNext(post);
        }else{
            temp->setNext(n);
        }
        

    }
    
}

int LinkedList::search(int item){
    Node * temp = head;
    int count = 1;
    while(temp!=NULL){
        if(temp->getData()==item){
            std::cout<<temp<<" ";
            return count;
        }
        temp=temp->getNext();
        count++;
    }
    std::cout<<0<<" ";
    return 0;
    
}

void LinkedList::deleteFront(){
    head=head->getNext();
    free(head);

}

void LinkedList::deleteEnd(){
    Node*temp = head;
    while((temp->getNext())->getNext()!=NULL){
        temp=temp->getNext();
    }
    free(temp->getNext());
    temp->setNext(NULL);
}

void LinkedList::deletePosition(int position){
    if(position < 1){
        std::cout<<"outside range";
    }else{
        Node* temp = head;
        for(int i = 1; i < position-1;i++){
            temp=temp->getNext();
            if(temp->getNext()==NULL){
                std::cout<<"outside range";
                return;
            }
        }
        Node* post = (temp->getNext())->getNext();
        temp->setNext(post);
        free(temp->getNext());
        
    }
}

int LinkedList::getItem(int position){
    if(position<1){
        std::cout<<std::numeric_limits<int>::max();
        return std::numeric_limits<int>::max();
    }
    else if(position==1){
        std::cout<< head->getData()<<" ";
        return head->getData();
    }
    else{
        Node* temp = head;
        for (int i = 1; i < position; i++){
            temp=temp->getNext();
            if(temp==NULL){
                std::cout<<std::numeric_limits<int>::max();
                return std::numeric_limits<int>::max();
            }
        }
        std::cout<<temp->getData();
        return temp->getData();
    }
}