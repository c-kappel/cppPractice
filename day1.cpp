//dynamic memory allocation w/ arrays
#include <iostream>

std::size_t getArraySize(){
    std::size_t arraySize;
    std::cout<< "How many ints would you like to store: ";
    std::cin>> arraySize;

    return arraySize;
}

void populateArray(int* arr, size_t size){
    for(std::size_t i = 0; i < size; i++){
        std::cout<< "What would you like in index " << i << "?";
        std::cin >> arr[i];
    }
}

void printArray(int* arr, std::size_t size){
    for(std::size_t i = 0; i < size; i++){
        std::cout<< arr[i] << " ";
    }
}

int main(){
    std::size_t arraySize = getArraySize();
    int* myIntArray = new int[arraySize];
    populateArray(myIntArray, arraySize);
    printArray(myIntArray, arraySize);
    delete[] myIntArray; //deallocate heap memory
}