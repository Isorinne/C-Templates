#include "pch.h"
#include "../cpp-templates-solution/LinkedList.h"

class LinkedListIntTest: public :: testing::Test {
public:
	LinkedListIntTest() {}
	void SetUp() {}
	void TearDown() {}
	~LinkedListIntTest() {}

	LinkedList<int> intList;
	int result, result2, result3, result4, result5;

	void insInt(int n) {
		for (int i = 0; i < n; i++)
			intList.insert(i, (i + 1000));
	}
};


TEST_F(LinkedListIntTest, intial_insert_is_data_valid) {
	
	result = 10;

	intList.insert(0, 10);

	EXPECT_EQ(intList.get_data(0), result);
}

TEST_F(LinkedListIntTest, initial_insert_is_size_valid) {

	result = 1;

	intList.insert(0, 10);

	EXPECT_EQ(intList.get_size(), result);
}


TEST_F(LinkedListIntTest, insert_100_is_sample_data_valid) {
	result = 1001, result2 = 1023, result3 = 1042, result4 = 1076, result5 = 1099;

	insInt(100);

	EXPECT_EQ(intList.get_data(1), result);
	EXPECT_EQ(intList.get_data(23), result2);
	EXPECT_EQ(intList.get_data(42), result3);
	EXPECT_EQ(intList.get_data(76), result4);
	EXPECT_EQ(intList.get_data(99), result5);

}

TEST_F(LinkedListIntTest, insert_100_is_size_valid) {
	result = 100;

	insInt(100);

	EXPECT_EQ(intList.get_size(), result);
}

TEST_F(LinkedListIntTest, when_pop_size_decrease) {
	result = 5;

	insInt(50);

	for (int i = 0; i < 45; i++)
		intList.pop(0);

	EXPECT_EQ(intList.get_size(), result);
}

TEST_F(LinkedListIntTest, size_is_zero_when_popping_last_value_in_list) {
	result = 0;

	insInt(1);
	intList.pop(0);

	EXPECT_EQ(intList.get_size(), result);
}

TEST_F(LinkedListIntTest, pop_last_insert_again_is_data_valid) {
	result = 1003;

	insInt(1);
	intList.pop(0);
	insInt(4);

	EXPECT_EQ(intList.get_data(3), result);
}

TEST_F(LinkedListIntTest, pop_last_insert_again_is_size_valid) {
	result = 4;

	insInt(1);
	intList.pop(0);
	insInt(4);

	EXPECT_EQ(intList.get_size(), result);
}

TEST_F(LinkedListIntTest, insert_in_middle_of_list_is_sample_data_valid) {
	result = 1000, result2 = 1024, result3 = 1009;

	insInt(10);
	intList.insert(4, 1024);

	EXPECT_EQ(intList.get_data(0), result);
	EXPECT_EQ(intList.get_data(4), result2);
	EXPECT_EQ(intList.get_data(10), result3);
}

TEST_F(LinkedListIntTest, insert_in_middle_of_list_is_size_valid) {
	result = 11;

	insInt(10);
	intList.insert(4, 1024);

	EXPECT_EQ(intList.get_size(), result);
}

TEST_F(LinkedListIntTest, pop_middle_of_list_is_sample_data_valid) {
	result = 1000, result2 = 1004, result3 = 1006, result4 = 1010;

	insInt(11);
	intList.pop(5);

	EXPECT_EQ(intList.get_data(0), result);
	EXPECT_EQ(intList.get_data(4), result2);
	EXPECT_EQ(intList.get_data(5), result3);
	EXPECT_EQ(intList.get_data(9), result4);
}