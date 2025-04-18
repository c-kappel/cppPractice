#include <iostream>
#include "../LinkedList/Node.h"

class Stack{
    Node* head;
    std::size_t size;
    public:

    Stack();

    int pop();

    void push(int data);

    int peek();

    bool isEmpty();

};