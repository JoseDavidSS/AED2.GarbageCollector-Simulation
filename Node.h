//
// Created by jose on 05/03/19.
//http://c.conclase.net/edd/?cap=001g

#ifndef TAREAEXTRACLASE_3_NODE_H
#define TAREAEXTRACLASE_3_NODE_H

#include <iostream>
using namespace std;

class Node {

public:

    Node(int val, Node* nex = NULL) {
        value = val;
        next = nex;
    }

    //Atributos con los que contará la clase.
    int value;
    Node* next;

    //Métodos con los que contará la clase.
    void setNodeValue(int value);

    int getNodeValue();

    friend class List;

};

typedef Node *pnode;


#endif //TAREAEXTRACLASE_3_NODE_H
