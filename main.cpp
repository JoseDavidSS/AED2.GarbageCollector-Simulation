#include <iostream>
#include "List.h"
#include "Collector.h"

int main() {
    /*List list;

    list.Insert(20);
    list.Insert(10);
    list.Insert(40);
    list.Insert(30);

    list.Show();

    cout << "Lista de elementos:" << endl;
    list.First();
    while(list.Actual()) {
        cout << list.ValorActual() << endl;
        list.Next();
    }
    list.First();
    cout << "Fisrt: " << list.ValorActual() << endl;

    list.Last();
    cout << "Last: " << list.ValorActual() << endl;

    list.Delete(10);
    list.Delete(15);
    list.Delete(45);
    list.Delete(30);
    list.Delete(40);

    list.Show();*/

    Node node = Node(12);
    Collector collector;
    collector.newMemoryUse(&node);
    Node node2 = Node(41);
    collector.newMemoryUse(&node2);
    Node node3 = Node(21);
    collector.newMemoryUse(&node3);

    return 0;
}