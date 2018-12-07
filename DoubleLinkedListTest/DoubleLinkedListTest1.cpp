#include "pch.h"
#include "../cpp-templates-solution/DoubleLinkedList.h"
#include "../cpp-templates-solution/ClassStuff.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(DoubleLinkedList_Test, Linked_list_add_and_remove)
{
	int result;
		List<int> dll;
		dll.insert(0,2);
		dll.insert(1,4);
		dll.insert(2,6);
		result = dll.get(1);
	EXPECT_EQ(4, result);
}