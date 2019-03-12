#include "List.h"

int List::getLenght() const {
    return this->lenght;
}

void List::setLenght(int lenght) {
    this->lenght = lenght;
}

void List::insertNode(int value){
    if (this->head == nullptr){
        this->head = new Node(value);
        this->lenght++;
    }else{
        Node* tmp = this->head;
        while (tmp->next != nullptr){
            tmp = tmp->next;
        }
        tmp->next = new Node(value);
        this->lenght++;
    }
}

void List::deleteNode(int value){
    if (this->head == NULL){
        printf("No hay nodo que borrar");
    }else{
        Node* tmp = this->head;
        while (tmp != nullptr){
            if (tmp->next->value == value){
                tmp->next = tmp->next->next;
                break;
            }else{
                tmp = tmp->next;
            }
        }
    }
}

void List::printList (){
    if (this->head == NULL){
        printf("Lista nula");
    }else{
        Node* tmp = this->head;
        while (tmp != nullptr){
            std::cout << tmp->value << std::endl;
            tmp = tmp->next;
            }
        }
}

