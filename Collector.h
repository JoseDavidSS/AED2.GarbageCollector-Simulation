//
// Created by jose on 05/03/19.
//

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
    void deleteMemory();


private:

    CollectorNode* head = nullptr;

};


#endif //TAREAEXTRACLASE_3_COLLECTOR_H
