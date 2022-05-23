#ifndef NODE_H
#define NODE_H

class Node {
public:
    Node();
    int getData();
    void setData(int input);
    Node* getNext();
    void setNext(Node* input);
private:
    int data;
    Node* next;

};
#endif