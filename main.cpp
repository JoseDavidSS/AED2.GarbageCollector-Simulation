#include <iostream>
#include <gtest/gtest.h>
#include "List.h"
#include "Collector.h"

TEST(List_Test, List_Length_When_Empty){
    List list;
    EXPECT_EQ(0, list.getLenght());
}

TEST(List_Test, List_Test_List_Length_When_Full){
    List list;

    //Test inserting nodes
    list.insertNode(6);
    list.insertNode(10);
    list.insertNode(7);
    list.insertNode(2);
    list.printList();
    printf("\n");
    EXPECT_EQ(4, list.getLenght());

    //Test deleting nodes
    list.deleteNode(10);
    list.deleteNode(2);
    list.printList();
    printf("\n");
    EXPECT_EQ(2, list.getLenght());

}

TEST(Collector_Test, Collector_Test_Colletor_Length_When_Full){

    //Testing Collector
    Collector* collector = Collector::getInstance();
    EXPECT_EQ(2, collector->getLenght());
}

TEST(Collector_Test, Collector_Test_Colletor_Boolean_False){

    //Testing Collector inUse False
    Collector* collector = Collector::getInstance();
    CollectorNode* tmp = collector->head;
    EXPECT_FALSE(tmp->inUse);
}

TEST(Collector_Test, Collector_Test_Colletor_Boolean_True){

    //Testing Collector inUse True+
    List list;
    list.insertNode(6);
    list.insertNode(10);
    list.insertNode(7);
    list.insertNode(2);
    list.printList();
    printf("\n");


    list.deleteNode(10);
    list.deleteNode(2);
    list.printList();
    printf("\n");


    list.insertNode(40);
    list.printList();
    printf("\n");


    Collector* collector = Collector::getInstance();
    CollectorNode* tmp = collector->head;
    EXPECT_TRUE(tmp->inUse);
}

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}