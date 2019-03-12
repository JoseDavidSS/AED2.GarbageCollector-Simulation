#ifndef TAREAEXTRACLASE_3_LIST_H
#define TAREAEXTRACLASE_3_LIST_H


#include "Node.h"

class List {
public:

    List() = default;

    int lenght = 0;

    int getLenght() const;
    void setLenght(int lenght);
    void insertNode (int value);
    void deleteNode (int value);
    void printList ();



private:
    Node* head = nullptr;


};
#endif //TAREAEXTRACLASE_3_LIST_H
