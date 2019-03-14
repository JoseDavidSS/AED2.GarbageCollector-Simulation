//
// Created by kevin on 09/03/19.
//

#include "CollectorNode.h"

using namespace std;

/**
 * Method that returns a boolean in order to know if the memory is being used or not.
 * @return a boolean that et us know if it is being used.
 */
bool CollectorNode::isInUse(){
    return this->inUse;
}

/**
 * Method that changes the boolean that knows if the memory if being used or not.
 * @param inUse the new boolean that knows if the memory is being used or not.
 */
void CollectorNode::setInUse(bool inUse) {
    this->inUse = inUse;
}