#include "pch.h"
#include "../cpp-templates-solution/DoubleLinkedList.h"
//#include "../cpp-templates-solution/ClassStuff.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_add_and_check_size)
{
	int result;
		List<int> dll;
		for (int i = 0; i < 100; i++)
		{
			dll.insert(i, i);
		}
		result = dll.getSize();
	EXPECT_EQ(100, result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_add_and_pop)
{
	int result;
	List<int> dll;
	dll.insert(0, 1);
	dll.insert(1, 4);
	dll.insert(2, 7);
	dll.pop(0);
	dll.pop(1);
	result = dll.get(0);
	EXPECT_EQ(7, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_add_and_empty_and_add)
{
	int result;
	List<int> dll;
	dll.insert(0, 1);
	dll.insert(1, 4);
	dll.pop(0);
	dll.pop(0);
	dll.insert(0, 7);
	result = dll.get(0);
	EXPECT_EQ(7, result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_add_and_empty_and_check_size)
{
	int result;
	List<int> dll;
	dll.insert(0, 1);
	dll.pop(0);
	result = dll.getSize();
	EXPECT_EQ(0, result);
}