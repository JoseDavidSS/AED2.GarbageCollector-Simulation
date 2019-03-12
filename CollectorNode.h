//
// Created by kevin on 09/03/19.
//

#ifndef TAREAEXTRACLASE_3_COLLECTORNODE_H
#define TAREAEXTRACLASE_3_COLLECTORNODE_H


#include "Node.h"

using namespace std;

class CollectorNode {

public:

    CollectorNode(Node* mem){
        memory = mem;
    };

    bool inUse = false;
    Node* memory;
    CollectorNode* next = nullptr;

    bool isInUse();
    void setInUse(bool inUSe);

};


#endif //TAREAEXTRACLASE_3_COLLECTORNODE_H
