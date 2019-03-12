#ifndef TAREAEXTRACLASE_3_COLLECTOR_H
#define TAREAEXTRACLASE_3_COLLECTOR_H

#include "Node.h"
#include "CollectorNode.h"

using namespace std;

class Collector {

public:

    Collector() = default;

    int lenght = 0;

    int getLenght() const;
    void setLenght(int lenght);
    void newMemoryUse(Node* memoryUsed);
    void deleteMemory(Node* freeMemory);
    Node* checkFreeMemory();


private:

    CollectorNode* head = nullptr;

};


#endif //TAREAEXTRACLASE_3_COLLECTOR_H
