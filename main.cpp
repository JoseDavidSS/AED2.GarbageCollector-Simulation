#include <iostream>
#include "List.h"
#include "Collector.h"

int main() {

    List list;
    list.insertNode(12);
    list.insertNode(5);
    list.insertNode(7);
    list.insertNode(10);
    list.deleteNode(10);
    list.insertNode(90);
    list.printList();

    return 0;
}