#include "Collector.h"

using namespace std;
Collector* Collector::collector = nullptr;

Collector* Collector::getInstance() {
    if (!collector){
        collector = new Collector;
    }
    return collector;
}

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

void Collector::deleteMemory(Node* freeMemory) {
    if (this->head->memory == freeMemory){
        this->head->setInUse(false);
    }else{
        CollectorNode* tmp = this->head;
        while (tmp != nullptr){
            if (tmp->memory == freeMemory){
                tmp->setInUse(false);
                break;
            }else{
                tmp = tmp->next;
            }
        }
    }
}

Node* Collector::checkFreeMemory() {
    if (this->head == nullptr){
        return nullptr;
    }
    else if (!this->head->isInUse()){
        this->head->setInUse(true);
        return this->head->memory;
    }else{
        CollectorNode* tmp = this->head;
        while (tmp != nullptr){
            if (!tmp->isInUse()){
                tmp->setInUse(true);
                return tmp->memory;
            }else{
                tmp = tmp->next;
            }
        }
        return nullptr;
    }
}