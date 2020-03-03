#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"
#include <iostream>

int main(){

    DoublyLinkedList greg;
    for(int i = 0;i<10;i++){
        greg.append('a');
    }
    std::cout << greg.get(3);
    return 0;

}
