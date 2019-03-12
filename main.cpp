#include <iostream>
#include "List.h"
#include "Collector.h"

int main() {

    List list;
    list.insertNode(12);
    list.insertNode(5);
    list.insertNode(7);
    list.insertNode(10);
    list.printList();
    list.deleteNode(7);
    list.printList();


    /*
    Node node = Node(12);
    Collector collector;
    collector.newMemoryUse(&node);
    Node node2 = Node(41);
    collector.newMemoryUse(&node2);
    Node node3 = Node(21);
    collector.newMemoryUse(&node3);
    */

    return 0;
}