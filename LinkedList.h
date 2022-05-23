#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <array>

class LinkedList {
public:
    void addFront(int newItem);
    void addEnd(int newItem);
    LinkedList();
    LinkedList(int* ptr, int size);
    void printItems();
    void addAtPosition(int position, int newItem);
    int search(int item);
    void deleteFront();
    void deleteEnd();
    void deletePosition(int position);
    int getItem(int position);
private:
    Node* head;
};
#endif