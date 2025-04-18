#include "Node.h"
#pragma once

class LinkedList{
    public: 
    Node* head;

    LinkedList();

    void add(int data);

    void remove(int data);

    void print();
};