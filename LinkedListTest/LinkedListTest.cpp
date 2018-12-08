#include "pch.h"
#include "../cpp-templates-solution/LinkedList.h"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(LinkedListTest, Inserting_1_Int_To_List) {
	LinkedList<int> intList;
	int result = 10;

	intList.insert(0, 10);

	EXPECT_EQ(intList.get_data(0), result);
}

TEST(LinkedListTest, Inserting_100_Ints_To_List) {
	LinkedList<int> intList;
	int result = 99;

	for (int i = 0; i < 100; i++)
		intList.insert(i, i);

	EXPECT_EQ(intList.get_data(99), result);
}

TEST(LinkedListTest, When_Inserting_Size_Follows) {
	LinkedList<int> intList;
	int result = 50;

	for (int i = 0; i < 50; i++)
		intList.insert(i, i);

	EXPECT_EQ(intList.get_size(), result);
}

TEST(LinkedListTest, When_Inserting_And_Popping_Size_Follows) {
	LinkedList<int> intList;
	int result = 5;

	for (int i = 0; i < 50; i++)
		intList.insert(i, i);

	for (int i = 0; i < 45; i++)
		intList.pop(0);

	EXPECT_EQ(intList.get_size(), result);
}
