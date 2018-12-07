#include "pch.h"
#include "../cpp-templates-solution/Queue.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Queue_Test, Queue_Looks_From_Top_To_Bot_Int) {
	int result;

		Queue<int> intQueue;

		intQueue.push(745);
		intQueue.push(321214);
		intQueue.push(23114);
		result = intQueue.bot();

	EXPECT_EQ(745, result);
}

TEST(Queue_Test, Queue_Removes_From_Top_To_Bot_Int) {
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

TEST(Queue_Test, Queue_Looks_From_Top_To_Bot_String) {
	string result;

		Queue<string> stringQueue;


		stringQueue.push("hello");
		stringQueue.push("World");
		stringQueue.push("hi");
		result = stringQueue.bot();

	EXPECT_EQ("hello", result);
}

TEST(Queue_Test, Queue_Removes_From_Top_To_Bot_String) {
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