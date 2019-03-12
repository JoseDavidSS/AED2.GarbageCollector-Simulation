#ifndef TAREAEXTRACLASE_3_COLLECTOR_H
#define TAREAEXTRACLASE_3_COLLECTOR_H

#include "Node.h"
#include "CollectorNode.h"

using namespace std;

class Collector {

public:

    int lenght = 0;

    static Collector* getInstance();
    int getLenght() const;
    void setLenght(int lenght);
    void newMemoryUse(Node* memoryUsed);
    void deleteMemory(Node* freeMemory);
    Node* checkFreeMemory();


private:

    Collector() = default;
    Collector(Collector const&) = default;
    Collector& operator = (Collector const&) = default;

    static Collector* collector;
    CollectorNode* head = nullptr;

};


#endif //TAREAEXTRACLASE_3_COLLECTOR_H
