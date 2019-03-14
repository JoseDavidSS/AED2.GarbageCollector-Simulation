#include "Collector.h"

using namespace std;
Collector* Collector::collector = nullptr;

/**
 * Singleton of the collector class.
 * @return the instance of the collector.
 */
Collector* Collector::getInstance() {
    if (!collector){
        collector = new Collector;
    }
    return collector;
}

/**
 * Method to get the current lenght of the collector.
 * @return the current lenght of the collector.
 */
int Collector::getLenght() const {
    return this->lenght;
}

/**
 * Method that changes the lenght of the collector.
 * @param lenght the amount of unused/used memory that the collector has gathered.
 */
void Collector::setLenght(int lenght) {
    this->lenght = lenght;
}

/**
 * Method to collect and add to a list an unused memory left by the Nodes List.
 * @param memoryUsed this is the memory that went unused.
 */
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

/**
 * Method that search for unused memory in the collector.
 * @return the unused memory.
 */
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