#include "pch.h"
#include "../cpp-templates-solution/Stack.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Stack_Test, Stack_Looks_From_Top_To_Bot_Int) {
	int result;

		Stack<int> intStack;

		intStack.push(745);
		intStack.push(321214);
		intStack.push(23114);
		result = intStack.top();

	EXPECT_EQ(23114, result);
}

TEST(Stack_Test, Stack_Removes_From_Top_To_Bot_Int) {
	int result;

		Stack<int> intStack;

		intStack.push(745);
		intStack.push(321214);
		intStack.push(23114);
		intStack.pop();
		intStack.pop();
		result = intStack.top();

	EXPECT_EQ(745, result);
}

TEST(Stack_Test, Stack_Looks_From_Top_To_Bot_String) {
	string result;

		Stack<string> stringStack;


		stringStack.push("hello");
		stringStack.push("World");
		stringStack.push("hi");
		result = stringStack.top();

	EXPECT_EQ("hi", result);
}

TEST(Stack_Test, Stack_Removes_From_Top_To_Bot_String) {
	string result;

		Stack<string> stringStack;


		stringStack.push("hello");
		stringStack.push("World");
		stringStack.push("hi");
		stringStack.pop();
		stringStack.pop();
		result = stringStack.top();

	EXPECT_EQ("hello", result);
}