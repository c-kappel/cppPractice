#include "Queue.h"

Queue::Queue(){
    size = 0;
    head = nullptr;
    tail = nullptr;
}

void Queue::add(int data){
    if(head == nullptr && tail == nullptr){
        head = new Node(data);
        tail = head;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

int Queue::dequeue(){
    if(head == nullptr){
        tail = nullptr;
        return -1; //bad request
    }
    else{
        int data = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return data;
    }
}

void Queue::print(){
    Node* currentNode = head;
    while(currentNode != nullptr){
        std::cout<< currentNode->data << " ";
        currentNode = currentNode->next;
    }
    std::cout << std::endl;
}

int main(){
    Queue myQ;
    myQ.add(2);
    myQ.add(2);
    myQ.add(92);
    myQ.add(43);
    myQ.add(112);
    myQ.print();
    std::cout<<myQ.dequeue();
    myQ.print();
}

