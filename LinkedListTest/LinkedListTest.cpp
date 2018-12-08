#include "pch.h"
#include "../cpp-templates-solution/LinkedList.h"

class LinkedListIntTest: public :: testing::Test {
public:
	LinkedListIntTest() {}
	void SetUp() {}
	void TearDown() {}
	~LinkedListIntTest() {}

	LinkedList<int> intList;
	int result;

	void insertInts(int n) {
		for (int i = 0; i < n; i++)
			intList.insert(i, i);
	}
};


TEST_F(LinkedListIntTest, When_Inserting_One_Value_To_List_Data_Is_Valid) {
	
	result = 10;

	intList.insert(0, 10);

	EXPECT_EQ(intList.get_data(0), result);
}

TEST_F(LinkedListIntTest, When_Inserting_100_Values_To_List_Data_Is_Valid) {
	result = 42;

	insertInts(100);

	EXPECT_EQ(intList.get_data(42), result);
}

TEST_F(LinkedListIntTest, When_Inserting_Size_Follows) {
	result = 50;

	insertInts(50);

	EXPECT_EQ(intList.get_size(), result);
}

TEST_F(LinkedListIntTest, When_Inserting_And_Popping_Size_Follows) {
	result = 5;

	insertInts(50);

	for (int i = 0; i < 45; i++)
		intList.pop(0);

	EXPECT_EQ(intList.get_size(), result);
}

TEST_F(LinkedListIntTest, When_Popping_Last_In_List_Size_Is_Zero) {
	result = 0;

	intList.insert(0, 555);
	intList.pop(0);

	EXPECT_EQ(intList.get_size(), result);
}

TEST_F(LinkedListIntTest, When_Popping_Last_In_List_Insert_Still_Works_And_Data_Is_Valid) {
	result = 3;

	insertInts(1);
	intList.pop(0);
	insertInts(4);

	EXPECT_EQ(intList.get_data(3), result);
}