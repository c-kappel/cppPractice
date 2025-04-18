#include "Stack.h"
#include <iostream>

Stack::Stack(){
    head = nullptr;
    size = 0;
}
int Stack::pop(){
    if(isEmpty()){
        return -1;
    }
    Node* temp = head;
    head = head->next;
    int tempData = temp->data;
    delete temp;
    return tempData;
}

void Stack::push(int data){
    if(isEmpty()){
        head = new Node(data);
        return;
    }
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

int Stack::peek(){
    return head->data;
}

bool Stack::isEmpty(){
    if(head == nullptr){
        std::cout<< "Empty stack\n";
        return true;
    }
    return false;
}

int main(){
    Stack myStack;
    for(int i = 0; i<10; i++){
         myStack.push(i);
    }
    std::cout<< myStack.peek();
    for(int i = 0; i<10; i++){
        myStack.pop();
    }
    std::cout<< myStack.isEmpty();
}