#include "pch.h"
#include "../cpp-templates-solution/DoubleLinkedList.h"
#include "../cpp-templates-solution/ClassStuff.h"
#include <string>

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_int_add_and_check_size)
{
	int result;
		List<int> intDll;
		for (int i = 0; i < 100; i++)
		{
			intDll.insert(i, i);
		}
		result = intDll.getSize();
	EXPECT_EQ(100, result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_int_add_and_pop)
{
	int result;
	List<int> intDll;
	intDll.insert(0, 1);
	intDll.insert(1, 4);
	intDll.insert(2, 7);
	intDll.pop(0);
	intDll.pop(1);
	result = intDll.get(0);
	EXPECT_EQ(4, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_int_add_empty_and_add)
{
	int result;
	List<int> intDll;
	intDll.insert(0, 1);
	intDll.insert(1, 4);
	intDll.pop(0);
	intDll.pop(0);
	intDll.insert(0, 7);
	result = intDll.get(0);
	EXPECT_EQ(7, result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_int_add_and_empty_and_check_size)
{
	int result;
	List<int> intDll;
	intDll.insert(0, 1);
	intDll.pop(0);
	result = intDll.getSize();
	EXPECT_EQ(0, result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_int_pop_and_check_size)
{
	int result;
	List<int> intDll;
	intDll.pop(0);
	result = intDll.getSize();
	EXPECT_EQ(0, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_int_when_pop_size_decrease)
{
	int result;
	List<int> intDll;
	for (int i = 0; i < 50; i++)
	{
		intDll.insert(i, i);
	}
	for (int i = 0; i < 30; i++)
	{
		intDll.pop(i);
	}
	result = intDll.getSize();
	EXPECT_EQ(20, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_int_when_add_after_pop_size_increase)
{
	int result;
	List<int> intDll;
	for (int i = 0; i < 50; i++)
	{
		intDll.insert(i, i);
	}
	for (int i = 0; i < 30; i++)
	{
		intDll.pop(i);
	}
	for (int i = 0; i < 10; i++)
	{
		intDll.insert(i, i);
	}
	result = intDll.getSize();
	EXPECT_EQ(30, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_double_add_to_middle_check_size)
{
	double result;
	List<double> doubleDll;
	doubleDll.insert(0, 11.11);
	doubleDll.insert(1, 12.22);
	doubleDll.insert(2, 13.33);
	doubleDll.insert(3, 14.44);

	doubleDll.insert(2, 15.55);
	result = doubleDll.getSize();
	EXPECT_EQ(5, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_double_add_to_middle_check_data)
{
	double result;
	List<double> doubleDll;
	doubleDll.insert(0, 11.11);
	doubleDll.insert(1, 12.22);
	doubleDll.insert(2, 13.33);
	doubleDll.insert(3, 14.44);

	doubleDll.insert(2, 15.55);
	result = doubleDll.get(2);
	EXPECT_EQ(15.55, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_double_pop_middle_check_data)
{
	double result;
	List<double> doubleDll;
	doubleDll.insert(0, 11.11);
	doubleDll.insert(1, 12.22);
	doubleDll.insert(2, 13.33);
	doubleDll.insert(3, 14.44);
	doubleDll.insert(2, 15.55);
	doubleDll.pop(2);
	result = doubleDll.get(2);
	EXPECT_EQ(13.33, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_double_pop_middle_check_size)
{
	double result;
	List<double> doubleDll;
	doubleDll.insert(0, 11.11);
	doubleDll.insert(1, 12.22);
	doubleDll.insert(2, 13.33);
	doubleDll.insert(3, 14.44);
	doubleDll.insert(2, 15.55);
	doubleDll.pop(2);
	result = doubleDll.getSize();
	EXPECT_EQ(4, result);
}




TEST(DoubleLinkedList_Test, Double_Linked_list_string_add_and_check_size)
{
	int result;
	List<std::string> stringDll;
	for (int i = 0; i < 100; i++)
	{
		stringDll.insert(i, "a");
	}
	result = stringDll.getSize();
	EXPECT_EQ(100, result);
}



TEST(DoubleLinkedList_Test, Double_Linked_list_string_add_and_check_middle)
{
	std::string result = "b";
	List<std::string> stringDll;

	stringDll.insert(0, "a");
	stringDll.insert(1, "b");
	stringDll.insert(2, "c");

	EXPECT_EQ(stringDll.get(1), result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_string_add_and_pop_first_and_last)
{
	std::string result = "b";
	List<std::string> stringDll;

	stringDll.insert(0, "a");
	stringDll.insert(1, "b");
	stringDll.insert(2, "c");
	stringDll.pop(0);
	stringDll.pop(1);

	EXPECT_EQ(stringDll.get(0), result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_string_add_and_check_last)
{
	std::string result = "a";
	List<std::string> stringDll;

	stringDll.insert(0, "a");
	stringDll.insert(0, "b");
	stringDll.insert(0, "c");

	EXPECT_EQ(stringDll.get(2), result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_string_add_and_pop_check_if_empty)
{
	int result = 0;
	List<std::string> stringDll;

	stringDll.insert(0, "a");
	stringDll.pop(0);

	EXPECT_EQ(stringDll.getSize(), result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_object_add_and_check_size)
{
	int result = 1;
	List<Stuff> stuffObj;
	Stuff stuff1;
	stuffObj.insert(0, stuff1);
	EXPECT_EQ(stuffObj.getSize(), result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_object_add_pop_and_check_size)
{
	int result = 1;
	List<Stuff> stuffObj;
	Stuff stuff1;
	Stuff stuff2;
	Stuff stuff3;
	stuffObj.insert(0, stuff1);
	stuffObj.insert(1, stuff2);
	stuffObj.insert(2, stuff3);
	stuffObj.pop(0);
	stuffObj.pop(0);
	EXPECT_EQ(stuffObj.getSize(), result);
}



TEST(DoubleLinkedList_Test, Double_Linked_list_object_add_pop_add_check_last)
{
	std::string result ="Hello";
	List<Stuff> stuffObj;
	Stuff stuff1;
	Stuff stuff2;
	Stuff stuff3;
	Stuff stuff4;
	stuffObj.insert(0, stuff1);
	stuffObj.insert(1, stuff2);
	stuffObj.insert(2, stuff3);
	stuffObj.pop(0);
	stuffObj.insert(2, stuff3);
	EXPECT_EQ(stuffObj.get(2).stringStuff, result);
}


TEST(DoubleLinkedList_Test, Double_Linked_list_object_add_pop_is_obj_double_valid)
{
	double result = 28.124;
	List<Stuff> stuffObj;
	Stuff stuff1;
	Stuff stuff2;
	stuffObj.insert(0, stuff1);
	stuffObj.insert(1, stuff2);
	stuffObj.pop(0);
	EXPECT_EQ(stuffObj.get(0).doubleStuff, result);
}

TEST(DoubleLinkedList_Test, Double_Linked_list_object_add_pop_is_obj_int_valid)
{
	int result = 6732;
	List<Stuff> stuffObj;
	Stuff stuff1;
	Stuff stuff2;
	stuffObj.insert(0, stuff1);
	stuffObj.insert(1, stuff2);
	stuffObj.pop(0);
	EXPECT_EQ(stuffObj.get(0).intStuff, result);
}