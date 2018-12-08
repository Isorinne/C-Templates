#include "pch.h"
#include "../cpp-templates-solution/LinkedList.h"


TEST(LinkedListIntTest, When_Inserting_One_Value_To_List_Data_Is_Valid) {
	LinkedList<int> intList;
	int result = 10;

	intList.insert(0, 10);

	EXPECT_EQ(intList.get_data(0), result);
}

TEST(LinkedListIntTest, When_Inserting_100_Values_To_List_Data_Is_Valid) {
	LinkedList<int> intList;
	int result = 42;

	for (int i = 0; i < 100; i++)
		intList.insert(i, i);

	EXPECT_EQ(intList.get_data(42), result);
}

TEST(LinkedListIntTest, When_Inserting_Size_Follows) {
	LinkedList<int> intList;
	int result = 50;

	for (int i = 0; i < 50; i++)
		intList.insert(i, i);

	EXPECT_EQ(intList.get_size(), result);
}

TEST(LinkedListIntTest, When_Inserting_And_Popping_Size_Follows) {
	LinkedList<int> intList;
	int result = 5;

	for (int i = 0; i < 50; i++)
		intList.insert(i, i);

	for (int i = 0; i < 45; i++)
		intList.pop(0);

	EXPECT_EQ(intList.get_size(), result);
}

TEST(LinkedListIntTest, When_Popping_Last_In_List_Size_Is_Zero) {
	LinkedList<int> intList;
	int result = 0;

	intList.insert(0, 555);
	intList.pop(0);

	EXPECT_EQ(intList.get_size(), result);
}

TEST(LinkedListIntTest, When_Popping_Last_In_List_Insert_Still_Works_And_Data_Is_Valid) {
	LinkedList<int> intList;
	int result = 42;

	intList.insert(0, 555);
	intList.pop(0);
	intList.insert(0, 23);
	intList.insert(1, 17);
	intList.insert(2, 5);
	intList.insert(3, 42);

	EXPECT_EQ(intList.get_data(3), result);
}