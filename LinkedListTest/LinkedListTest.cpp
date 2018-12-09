#include "pch.h"
#include "../cpp-templates-solution/LinkedList.h"
#include "../cpp-templates-solution/ClassStuff.h"

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

class LinkedListStringTest : public ::testing::Test {
public:
	LinkedListStringTest() {}
	void SetUp() {}
	void TearDown() {}
	~LinkedListStringTest() {}

	LinkedList<std::string> strList;
	std::string result, result2, result3;
	int size_result;

	void insStr(int n) {
		switch (n) {
		case 1: 
			strList.insert(0, "Zero"); 
			break;

		case 2: 
			strList.insert(0, "Zero"); 
			strList.insert(1, "One");
			break;

		case 3: 
			strList.insert(0, "Zero"); 
			strList.insert(1, "One");
			strList.insert(2, "Three");
			break;

		case 4: 
			strList.insert(0, "Zero"); 
			strList.insert(1, "One");
			strList.insert(2, "Two"); 
			strList.insert(3, "Three");
			break;

		case 5: 
			strList.insert(0, "Zero");
			strList.insert(1, "One");
			strList.insert(2, "Two");
			strList.insert(3, "Three");
			strList.insert(4, "Four");
			break;

		case 6: 
			strList.insert(0, "Zero");
			strList.insert(1, "One");
			strList.insert(2, "Two");
			strList.insert(3, "Three");
			strList.insert(4, "Four");
			strList.insert(5, "Five");
			break;

		case 7: 
			strList.insert(0, "Zero");
			strList.insert(1, "One");
			strList.insert(2, "Two");
			strList.insert(3, "Three");
			strList.insert(4, "Four");
			strList.insert(5, "Five");
			strList.insert(6, "Six");
			break;

		case 8: 
			strList.insert(0, "Zero");
			strList.insert(1, "One");
			strList.insert(2, "Two");
			strList.insert(3, "Three");
			strList.insert(4, "Four");
			strList.insert(5, "Five");
			strList.insert(6, "Six");
			strList.insert(7, "Seven");
			break;

		case 9: 
			strList.insert(0, "Zero");
			strList.insert(1, "One");
			strList.insert(2, "Two");
			strList.insert(3, "Three");
			strList.insert(4, "Four");
			strList.insert(5, "Five");
			strList.insert(6, "Six");
			strList.insert(7, "Seven");
			strList.insert(8, "Eight");
			break;

		case 10:
			strList.insert(0, "Zero");
			strList.insert(1, "One");
			strList.insert(2, "Two");
			strList.insert(3, "Three");
			strList.insert(4, "Four");
			strList.insert(5, "Five");
			strList.insert(6, "Six");
			strList.insert(7, "Seven");
			strList.insert(8, "Eight");
			strList.insert(9, "Nine");
			break;
		}
			
	}
};

class LinkedListObjectTest : public ::testing::Test {
public:
	LinkedListObjectTest() {}
	void SetUp() {}
	void TearDown() {}
	~LinkedListObjectTest() {}

	int size_result;

	LinkedList<Stuff> objList;
	Stuff result;
	
	Stuff obj, obj1, obj2, obj3, obj4, obj5, obj6, obj7, obj8, obj9;
	
	void insObj(int n) {
		switch (n) {
		case 1:
			objList.insert(0, obj);
			break;

		case 2:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			break;

		case 3:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			objList.insert(2, obj2);
			break;

		case 4:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			objList.insert(2, obj2);
			objList.insert(3, obj3);
			break;

		case 5:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			objList.insert(2, obj2);
			objList.insert(3, obj3);
			objList.insert(4, obj4);
			break;

		case 6:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			objList.insert(2, obj2);
			objList.insert(3, obj3);
			objList.insert(4, obj4);
			objList.insert(5, obj5);
			break;

		case 7:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			objList.insert(2, obj2);
			objList.insert(3, obj3);
			objList.insert(4, obj4);
			objList.insert(5, obj5);
			objList.insert(6, obj6);
			break;

		case 8:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			objList.insert(2, obj2);
			objList.insert(3, obj3);
			objList.insert(4, obj4);
			objList.insert(5, obj5);
			objList.insert(6, obj6);
			objList.insert(7, obj7);
			break;

		case 9:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			objList.insert(2, obj2);
			objList.insert(3, obj3);
			objList.insert(4, obj4);
			objList.insert(5, obj5);
			objList.insert(6, obj6);
			objList.insert(7, obj7);
			objList.insert(8, obj8);
			break;

		case 10:
			objList.insert(0, obj);
			objList.insert(1, obj1);
			objList.insert(2, obj2);
			objList.insert(3, obj3);
			objList.insert(4, obj4);
			objList.insert(5, obj5);
			objList.insert(6, obj6);
			objList.insert(7, obj7);
			objList.insert(8, obj8);
			objList.insert(9, obj9);
			break;
		}


	}
};

/*******************************************************************************************************************************************/

TEST_F(LinkedListIntTest, intial_insert_is_data_valid) {
	
	result = 10;

	intList.insert(0, 10);

	EXPECT_EQ(intList.get(0), result);
}

TEST_F(LinkedListIntTest, initial_insert_is_size_valid) {

	result = 1;

	intList.insert(0, 10);

	EXPECT_EQ(intList.length(), result);
}


TEST_F(LinkedListIntTest, insert_100_is_sample_data_valid) {
	result = 1001, result2 = 1023, result3 = 1042, result4 = 1076, result5 = 1099;

	insInt(100);

	EXPECT_EQ(intList.get(1), result);
	EXPECT_EQ(intList.get(23), result2);
	EXPECT_EQ(intList.get(42), result3);
	EXPECT_EQ(intList.get(76), result4);
	EXPECT_EQ(intList.get(99), result5);

}

TEST_F(LinkedListIntTest, insert_100_is_size_valid) {
	result = 100;

	insInt(100);

	EXPECT_EQ(intList.length(), result);
}

TEST_F(LinkedListIntTest, when_pop_size_decrease) {
	result = 5;

	insInt(50);

	for (int i = 0; i < 45; i++)
		intList.pop(0);

	EXPECT_EQ(intList.length(), result);
}

TEST_F(LinkedListIntTest, size_is_zero_when_popping_last_value_in_list) {
	result = 0;

	insInt(1);
	intList.pop(0);

	EXPECT_EQ(intList.length(), result);
}

TEST_F(LinkedListIntTest, pop_last_insert_again_is_data_valid) {
	result = 1003;

	insInt(1);
	intList.pop(0);
	insInt(4);

	EXPECT_EQ(intList.get(3), result);
}

TEST_F(LinkedListIntTest, pop_last_insert_again_is_size_valid) {
	result = 4;

	insInt(1);
	intList.pop(0);
	insInt(4);

	EXPECT_EQ(intList.length(), result);
}

TEST_F(LinkedListIntTest, insert_in_middle_of_list_is_sample_data_valid) {
	result = 1000, result2 = 1024, result3 = 1009;

	insInt(10);
	intList.insert(4, 1024);

	EXPECT_EQ(intList.get(0), result);
	EXPECT_EQ(intList.get(4), result2);
	EXPECT_EQ(intList.get(10), result3);
}

TEST_F(LinkedListIntTest, insert_in_middle_of_list_is_size_valid) {
	result = 11;

	insInt(10);
	intList.insert(4, 1024);

	EXPECT_EQ(intList.length(), result);
}

TEST_F(LinkedListIntTest, pop_middle_of_list_is_sample_data_valid) {
	result = 1000, result2 = 1004, result3 = 1006, result4 = 1010;

	insInt(11);
	intList.pop(5);

	EXPECT_EQ(intList.get(0), result);
	EXPECT_EQ(intList.get(4), result2);
	EXPECT_EQ(intList.get(5), result3);
	EXPECT_EQ(intList.get(9), result4);
}

TEST_F(LinkedListIntTest, pop_middle_of_list_is_size_valid) {
	result = 10;

	insInt(11);
	intList.pop(5);

	EXPECT_EQ(intList.length(), result);
}

/*******************************************************************************************************************************************/

TEST_F(LinkedListStringTest, initial_insert_is_data_valid) {
	result = "Hello World!";

	strList.insert(0, "Hello World!");

	EXPECT_EQ(strList.get(0), result);
}

TEST_F(LinkedListStringTest, initial_insert_is_size_valid) {
	size_result = 1;

	strList.insert(0, "Hello World!");

	EXPECT_EQ(strList.length(), size_result);
}


TEST_F(LinkedListStringTest, insert_100_is_sample_data_valid) {
	result = "Nine", result2 = "Zero", result3 = "Five";

	for (int i = 0; i < 10; i++) insStr(10);

	EXPECT_EQ(strList.get(99), result);
	EXPECT_EQ(strList.get(0), result2);
	EXPECT_EQ(strList.get(55), result3);
}

TEST_F(LinkedListStringTest, insert_100_is_size_valid) {
	size_result = 100;

	for (int i = 0; i < 10; i++) insStr(10);
	
	EXPECT_EQ(strList.length(), size_result);
}


TEST_F(LinkedListStringTest, when_pop_size_decrease) {
	size_result = 5;

	insStr(10);

	for (int i = 0; i < 5; i++)
		strList.pop(0);

	EXPECT_EQ(strList.length(), size_result);
}

TEST_F(LinkedListStringTest, size_is_zero_when_popping_last_value_in_list) {
	size_result = 0;

	insStr(1);
	strList.pop(0);

	EXPECT_EQ(strList.length(), size_result);
}

TEST_F(LinkedListStringTest, pop_last_insert_again_is_data_valid) {
	result = "Three";

	insStr(1);
	strList.pop(0);
	insStr(4);

	EXPECT_EQ(strList.get(3), result);
}

TEST_F(LinkedListStringTest, pop_last_insert_again_is_size_valid) {
	size_result = 4;

	insStr(1);
	strList.pop(0);
	insStr(4);

	EXPECT_EQ(strList.length(), size_result);
}

TEST_F(LinkedListStringTest, insert_in_middle_of_list_is_sample_data_valid) {
	result = "Zero", result2 = "Hello World!", result3 = "Nine";

	insStr(10);
	strList.insert(4, "Hello World!");

	EXPECT_EQ(strList.get(0), result);
	EXPECT_EQ(strList.get(4), result2);
	EXPECT_EQ(strList.get(10), result3);
}

TEST_F(LinkedListStringTest, insert_in_middle_of_list_is_size_valid) {
	size_result = 10;

	insStr(9);
	strList.insert(4, "Hello World!");

	EXPECT_EQ(strList.length(), size_result);
}

TEST_F(LinkedListStringTest, pop_middle_of_list_is_sample_data_valid) {
	result = "Five", result2 = "Three";

	insStr(9);
	strList.pop(4);

	EXPECT_EQ(strList.get(4), result);
	EXPECT_EQ(strList.get(3), result2);
}

TEST_F(LinkedListStringTest, pop_middle_of_list_is_size_valid) {
	size_result = 8;

	insStr(9);
	strList.pop(4);

	EXPECT_EQ(strList.length(), size_result);
}

/*******************************************************************************************************************************************/

TEST_F(LinkedListObjectTest, initial_insert_is_obj_int_valid) {
	objList.insert(0, obj);

	EXPECT_EQ((objList.get(0)).intStuff, result.intStuff);
}

TEST_F(LinkedListObjectTest, initial_insert_is_obj_double_valid) {
	objList.insert(0, obj);

	EXPECT_DOUBLE_EQ((objList.get(0)).doubleStuff, result.doubleStuff);
}

TEST_F(LinkedListObjectTest, initial_insert_is_obj_string_valid) {
	objList.insert(0, obj);

	EXPECT_EQ((objList.get(0)).stringStuff, result.stringStuff);
}

TEST_F(LinkedListObjectTest, initial_insert_is_size_valid) {
	size_result = 1;

	objList.insert(0, obj);

	EXPECT_EQ(objList.length(), size_result);
}

TEST_F(LinkedListObjectTest, insert_100_is_obj_int_valid) {

	for (int i = 0; i < 10; i++) insObj(10);

	EXPECT_EQ((objList.get(99)).intStuff, result.intStuff);
}

TEST_F(LinkedListObjectTest, insert_100_is_obj_double_valid) {

	for (int i = 0; i < 10; i++) insObj(10);

	EXPECT_DOUBLE_EQ((objList.get(99)).doubleStuff, result.doubleStuff);
}

TEST_F(LinkedListObjectTest, insert_100_is_obj_string_valid) {

	for (int i = 0; i < 10; i++) insObj(10);

	EXPECT_EQ((objList.get(99)).stringStuff, result.stringStuff);
}

TEST_F(LinkedListObjectTest, insert_100_is_size_valid) {
	size_result = 100;

	for (int i = 0; i < 10; i++) insObj(10);

	EXPECT_EQ(objList.length(), size_result);
}

TEST_F(LinkedListObjectTest, when_pop_size_decrease) {
	size_result = 5;

	insObj(10);

	for (int i = 0; i < 5; i++)
		objList.pop(0);

	EXPECT_EQ(objList.length(), size_result);
}

TEST_F(LinkedListObjectTest, size_is_zero_when_popping_last_obj_in_list) {
	size_result = 0;

	insObj(1);
	objList.pop(0);

	EXPECT_EQ(objList.length(), size_result);
}

TEST_F(LinkedListObjectTest, pop_last_insert_again_is_obj_int_valid) {

	insObj(1);
	objList.pop(0);
	insObj(4);

	EXPECT_EQ((objList.get(3)).intStuff, result.intStuff);
}

TEST_F(LinkedListObjectTest, pop_last_insert_again_is_obj_double_valid) {

	insObj(1);
	objList.pop(0);
	insObj(4);

	EXPECT_DOUBLE_EQ((objList.get(3)).doubleStuff, result.doubleStuff);
}

TEST_F(LinkedListObjectTest, pop_last_insert_again_is_obj_string_valid) {

	insObj(1);
	objList.pop(0);
	insObj(4);

	EXPECT_EQ((objList.get(3)).stringStuff, result.stringStuff);
}

TEST_F(LinkedListObjectTest, pop_last_insert_again_is_size_valid) {
	size_result = 4;

	insObj(1);
	objList.pop(0);
	insObj(4);

	EXPECT_EQ(objList.length(), size_result);
}