#include "pch.h"
#include "../cpp-templates-solution/Stack.h"
#include "../cpp-templates-solution/ClassStuff.h"

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

TEST(Stack_Test, Stack_Looks_From_Top_To_Bot_ClassDouble) {
	Stack<Stuff> objectStack;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectStack.push(Stuff1);
	objectStack.push(Stuff2);
	objectStack.push(Stuff3);
	objectStack.push(Stuff4);
	result = objectStack.top();


	EXPECT_EQ(Stuff1.doubleStuff, result.doubleStuff);
}

TEST(Stack_Test, Stack_Looks_From_Top_To_Bot_ClassInt) {
	Stack<Stuff> objectStack;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectStack.push(Stuff1);
	objectStack.push(Stuff2);
	objectStack.push(Stuff3);
	objectStack.push(Stuff4);
	result = objectStack.top();


	EXPECT_EQ(Stuff1.intStuff, result.intStuff);
}

TEST(Stack_Test, Stack_Looks_From_Top_To_Bot_ClassString) {
	Stack<Stuff> objectStack;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectStack.push(Stuff1);
	objectStack.push(Stuff2);
	objectStack.push(Stuff3);
	objectStack.push(Stuff4);
	result = objectStack.top();


	EXPECT_EQ(Stuff1.stringStuff, result.stringStuff);
}

TEST(Stack_Test, Stack_Remove_From_Top_To_Bot_ClassDouble) {
	Stack<Stuff> objectStack;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectStack.push(Stuff1);
	objectStack.push(Stuff2);
	objectStack.push(Stuff3);
	objectStack.push(Stuff4);
	objectStack.pop();
	objectStack.pop();
	result = objectStack.top();


	EXPECT_EQ(Stuff3.doubleStuff, result.doubleStuff);
}

TEST(Stack_Test, Stack_Remove_From_Top_To_Bot_ClassInt) {
	Stack<Stuff> objectStack;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectStack.push(Stuff1);
	objectStack.push(Stuff2);
	objectStack.push(Stuff3);
	objectStack.push(Stuff4);
	objectStack.pop();
	objectStack.pop();
	result = objectStack.top();


	EXPECT_EQ(Stuff3.intStuff, result.intStuff);
}

TEST(Stack_Test, Stack_Remove_From_Top_To_Bot_ClassString) {
	Stack<Stuff> objectStack;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectStack.push(Stuff1);
	objectStack.push(Stuff2);
	objectStack.push(Stuff3);
	objectStack.push(Stuff4);
	objectStack.pop();
	objectStack.pop();
	result = objectStack.top();


	EXPECT_EQ(Stuff3.stringStuff, result.stringStuff);
}