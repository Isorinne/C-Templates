#include <iostream>
#include "Stack.h"
#include "Queue.h"

using std::cout;
using std::endl;

int main() {
	//DoubleLinkedList

	//LinkedList

	//Queue
	try {
		Queue<int> intQueue;
		Queue<string> stringQueue;

		intQueue.push(745);
		intQueue.push(321214);
		intQueue.push(23114);
		cout << intQueue.bot() << endl;

		stringQueue.push("hello");
		stringQueue.push("World");
		stringQueue.push("hi");
		cout << stringQueue.bot() << std::endl;
		stringQueue.pop();
		stringQueue.pop();
		cout << stringQueue.bot() << std::endl;
	}
	catch (exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
		return -1;
	}
	//Stack
	try {
		Stack<int> intStack;
		Stack<string> stringStack;

		intStack.push(745);
		intStack.push(321214);
		intStack.push(23114);
		cout << intStack.top() << endl;

		stringStack.push("hello");
		stringStack.push("World");
		stringStack.push("hi");
		cout << stringStack.top() << std::endl;
		stringStack.pop();
		stringStack.pop();
		cout << stringStack.top() << std::endl;
	}
	catch (exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
		return -1;
	}
}