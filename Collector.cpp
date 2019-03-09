//
// Created by jose on 05/03/19.
//

#include "Collector.h"

using namespace std;

int Collector::getLenght() const {
    return this->lenght;
}

void Collector::setLenght(int lenght) {
    this->lenght = lenght;
}

void Collector::newMemoryUse(Node* memoryUsed) {
    if (this->head == nullptr){
        this->head = new CollectorNode(memoryUsed);
        this->lenght++;
    }else{
        CollectorNode* tmp = this->head;
        while (tmp->next != nullptr){
            tmp = tmp->next;
        }
        tmp->next = new CollectorNode(memoryUsed);
        this->lenght++;
    }
}

void Collector::deleteMemory() {}