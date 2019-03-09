//
// Created by jose on 05/03/19.
//

#ifndef TAREAEXTRACLASE_3_LIST_H
#define TAREAEXTRACLASE_3_LIST_H


#include "Node.h"

class List {
public:
    List() { first = actual = NULL; }
    ~List();

    void Insert(int value);
    void Delete(int value);
    bool EmptyList() { return first == NULL; }
    void Show();
    void Next() { if(actual) actual = actual->next; }
    void First() { actual = first; }
    void Last() { First(); if(!EmptyList()) while(actual->next) Next(); }
    bool Actual() { return actual != NULL; }
    int ValorActual() { return actual->value; }

private:
    pnode first;
    pnode actual;


};


#endif //TAREAEXTRACLASE_3_LIST_H
