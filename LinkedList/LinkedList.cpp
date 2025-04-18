#include "LinkedList.h"
#include <iostream>

    LinkedList::LinkedList(){
        head = nullptr;
    }
    void LinkedList::add(int data){
        if(head == nullptr){
            head = new Node(data);
        }
        else{
            Node* currentNode = head;
                while(currentNode->next != nullptr){
                    currentNode = currentNode->next;
                }
            currentNode->next = new Node(data);
        }
    }

    void LinkedList::remove(int data){
        Node* currentNode = head;
        if(currentNode->data == data){
            Node* temp = currentNode->next;
            delete currentNode;
            head = temp;
            return;
        }
        while(currentNode->next != nullptr){
            if(currentNode->next->data == data){
                Node* temp = currentNode->next->next;
                delete currentNode->next;
                currentNode->next = temp;
                return;
            }
            currentNode = currentNode->next;
        }
    }

    void LinkedList::print(){
        if(head == nullptr){
            std::cout<< "Empty linked list\n";
        }
        Node* currentNode = head;
        while(currentNode != nullptr){
            std::cout<< currentNode->data << " ";
            currentNode = currentNode->next;
        }
        std::cout<<"\n";
        }


int main(){
    LinkedList list = LinkedList();
    list.print();
    list.add(1);
    list.add(4);
    list.print();
    list.remove(1);
    list.print();

}



