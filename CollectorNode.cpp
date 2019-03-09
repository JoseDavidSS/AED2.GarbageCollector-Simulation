//
// Created by kevin on 09/03/19.
//

#include "CollectorNode.h"

using namespace std;

bool CollectorNode::isInUse(){
    return this->inUse;
}

void CollectorNode::setInUse(bool inUse) {
    this->inUse = inUse;
}