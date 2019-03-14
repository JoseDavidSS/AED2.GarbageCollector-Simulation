#include <iostream>
#include <gtest/gtest.h>
#include "List.h"
#include "Collector.h"

TEST(List_Test, List_Lenght_When_Empty){
    List list;
    EXPECT_EQ(0, list.getLenght());
}

TEST(List_Test, List_Test_List_Lenght_When_Full){
    List list;

    //Test inserting nodes
    list.insertNode(6);
    list.insertNode(10);
    list.insertNode(7);
    list.insertNode(2);
    list.printList();
    EXPECT_EQ(4, list.getLenght());

    //Test deleting nodes
    list.deleteNode(10);
    list.deleteNode(2);
    list.printList();
    EXPECT_EQ(2, list.getLenght());

    //Testing Collector
    Collector* collector = Collector::getInstance();
    EXPECT_EQ(2, collector->getLenght());
}

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}