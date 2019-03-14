#include "Node.h"
using namespace std;

/**
 * Method that changes the current value of the node.
 * @param value the new value of the node.
 */
void Node::setNodeValue(int value){
    this->value = value;
}

/**
 * Method that returns the node value.
 * @return the current node value.
 */
int Node::getNodeValue() {
    return this->value;

}