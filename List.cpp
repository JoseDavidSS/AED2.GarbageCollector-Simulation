//
// Created by jose on 05/03/19.
//

#include "List.h"

List::~List() {
    pnode aux;

    while(first) {
        aux = first;
        first = first->next;
        delete aux;
    }
    actual = NULL;
}

void List::Insert(int value) {
    pnode prev;

    // Si la lista está vacía
    if(EmptyList() || first-> value > value) {

        // Asignamos a lista un nuevo Node de value value y cuyo next elemento es la lista actual
        first = new Node (value, first);

    } else {
        // Buscar el nodo de valor menor a v
        prev = first;
        // Avanzamos hasta el último elemento o hasta que el siguiente tenga
        // un valor mayor que v

        while(prev->next && prev-> next-> value <= value)
            prev = prev->next;

        // Creamos un nuevo nodo después del nodo prev, y cuyo next nodo es el next del prev
        prev->next = new Node (value, prev->next);
    }
}

void List::Delete (int value) {
    pnode prev, node;

    node = first;
    prev = NULL;

    while(node && node->value < value) {
        prev = node;
        node = node->next;
    }

    if(!node || node->value != value) return;

    else { // Borrar el node

        if(!prev) // Primer elemento
            first = node->next;

        else  // un elemento cualquiera
            prev->next = node->next;

        delete node;
    }
}


void List::Show() {
    Node *aux;

    aux = first;
    while(aux) {
        cout << aux->value << "-> ";
        aux = aux->next;
    }
    cout << endl;
}
