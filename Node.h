#ifndef TAREAEXTRACLASE_3_NODE_H
#define TAREAEXTRACLASE_3_NODE_H

#include <iostream>
using namespace std;

class Node {

public:

    Node(int val, Node* nex = nullptr) {
        value = val;
        next = nex;
    }

    //Atributos con los que contará la clase.
    int value;
    Node* next = nullptr;

    //Métodos con los que contará la clase.
    void setNodeValue(int value);
    int getNodeValue();

};

#endif //TAREAEXTRACLASE_3_NODE_H
