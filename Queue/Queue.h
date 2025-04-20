#pragma once
#include <iostream>
#include "../LinkedList/Node.h"

class Queue{
    private:
    Node* head;
    Node* tail;
    std::size_t size;

    public:
    Queue();

    void add(int data);

    int dequeue();

    std::size_t getSize();

    void print();

};