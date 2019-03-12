#include "List.h"
#include "Collector.h"

using namespace std;

int List::getLenght() const {
    return this->lenght;
}

void List::setLenght(int lenght) {
    this->lenght = lenght;
}

void List::insertNode(int value){
    Collector* collector = Collector::getInstance();
    Node* node = collector->checkFreeMemory();
    if (this->head == nullptr){
        if (node == nullptr){
            this->head = new Node(value);
            this->lenght++;
        }else{
            this->head = new(node) Node(value);
            this->lenght++;
        }
    }else{
        Node* tmp = this->head;
        while (tmp->next != nullptr){
            tmp = tmp->next;
        }
        if (node == nullptr){
            tmp->next = new Node(value);
            this->lenght++;
        }else{
            tmp->next = new(node) Node(value);
            this->lenght++;
        }
    }
}

void List::deleteNode(int value){
    Collector* collector = Collector::getInstance();
    if (this->head == nullptr){
        printf("No hay nodo que borrar");
    }else if(this->head->value == value){
        collector->newMemoryUse(this->head);
        this->head = this->head->next;
    }else{
        Node* tmp = this->head;
        while (tmp->next != nullptr){
            if (tmp->next->value == value){
                collector->newMemoryUse(tmp->next);
                tmp->next = tmp->next->next;
                break;
            }else{
                tmp = tmp->next;
            }
        }
    }
}

void List::printList (){
    if (this->head == nullptr){
        printf("Lista nula");
    }else{
        Node* tmp = this->head;
        while (tmp != nullptr){
            std::cout << tmp->value << std::endl;
            tmp = tmp->next;
            }
        }
}

