#include "pch.h"
#include "../cpp-templates-solution/Queue.h"
#include "../cpp-templates-solution/ClassStuff.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Queue_Test, Queue_Remove_From_Bot_To_Top_Int) {
	int result;

		Queue<int> intQueue;

		intQueue.push(745);
		intQueue.push(321214);
		intQueue.push(23114);
		result = intQueue.bot();

	EXPECT_EQ(745, result);
}

TEST(Queue_Test, Queue_Removes_From_Bot_To_Top_Int) {
	int result;

		Queue<int> intQueue;

		intQueue.push(745);
		intQueue.push(321214);
		intQueue.push(23114);
		intQueue.pop();
		intQueue.pop();
		result = intQueue.bot();

	EXPECT_EQ(23114, result);
}

TEST(Queue_Test, Queue_Looks_From_Bot_To_Top_String) {
	string result;

		Queue<string> stringQueue;


		stringQueue.push("hello");
		stringQueue.push("World");
		stringQueue.push("hi");
		result = stringQueue.bot();

	EXPECT_EQ("hello", result);
}

TEST(Queue_Test, Queue_Removes_From_Bot_To_Top_String) {
	string result;

		Queue<string> stringQueue;


		stringQueue.push("hello");
		stringQueue.push("World");
		stringQueue.push("hi");
		stringQueue.pop();
		stringQueue.pop();
		result = stringQueue.bot();

	EXPECT_EQ("hi", result);
}

TEST(Queue_Test, Queue_Looks_From_Bot_To_Top_ClassDouble) {
	Queue<Stuff> objectQueue;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectQueue.push(Stuff1);
	objectQueue.push(Stuff2);
	objectQueue.push(Stuff3);
	objectQueue.push(Stuff4);
	result = objectQueue.bot();


	EXPECT_EQ(Stuff1.doubleStuff, result.doubleStuff);
}

TEST(Queue_Test, Queue_Looks_From_Bot_To_Top_ClassInt) {
	Queue<Stuff> objectQueue;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectQueue.push(Stuff1);
	objectQueue.push(Stuff2);
	objectQueue.push(Stuff3);
	objectQueue.push(Stuff4);
	result = objectQueue.bot();


	EXPECT_EQ(Stuff1.intStuff, result.intStuff);
}

TEST(Queue_Test, Queue_Looks_From_Bot_To_Top_ClassString) {
	Queue<Stuff> objectQueue;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectQueue.push(Stuff1);
	objectQueue.push(Stuff2);
	objectQueue.push(Stuff3);
	objectQueue.push(Stuff4);
	result = objectQueue.bot();


	EXPECT_EQ(Stuff1.stringStuff, result.stringStuff);
}

TEST(Queue_Test, Queue_Remove_From_Bot_To_Top_ClassDouble) {
	Queue<Stuff> objectQueue;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectQueue.push(Stuff1);
	objectQueue.push(Stuff2);
	objectQueue.push(Stuff3);
	objectQueue.push(Stuff4);
	objectQueue.pop();
	objectQueue.pop();
	result = objectQueue.bot();


	EXPECT_EQ(Stuff3.doubleStuff, result.doubleStuff);
}

TEST(Queue_Test, Queue_Remove_From_Bot_To_Top_ClassInt) {
	Queue<Stuff> objectQueue;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectQueue.push(Stuff1);
	objectQueue.push(Stuff2);
	objectQueue.push(Stuff3);
	objectQueue.push(Stuff4);
	objectQueue.pop();
	objectQueue.pop();
	result = objectQueue.bot();


	EXPECT_EQ(Stuff3.intStuff, result.intStuff);
}

TEST(Queue_Test, Queue_Remove_From_Bot_To_Top_ClassString) {
	Queue<Stuff> objectQueue;
	Stuff result;

	Stuff Stuff1;
	Stuff Stuff2;
	Stuff Stuff3;
	Stuff Stuff4;

	objectQueue.push(Stuff1);
	objectQueue.push(Stuff2);
	objectQueue.push(Stuff3);
	objectQueue.push(Stuff4);
	objectQueue.pop();
	objectQueue.pop();
	result = objectQueue.bot();


	EXPECT_EQ(Stuff3.stringStuff, result.stringStuff);
}