#include "pch.h"
#include "../cpp-templates-solution/DoubleLinkedList.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(DoubleLinkedList_Test, Linked_list_add_and_remove)
{
	int result;
	DoubleLinkedList<int> dll;
	dll.append(2);
	dll.append(4);
	dll.append(6);
	dll.deleteFront();
	dll.deleteFront();
	result = dll.
	EXPECT_EQ(6, result);
}