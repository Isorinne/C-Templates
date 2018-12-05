#include <iostream>
#include "Stack.h"

using std::cout;
using std::endl;

int main() {
	//DoubleLinkedList

	//LinkedList

	//Queue

	//Stack
	try {
		Stack<int> intStack;
		Stack<string> stringStack;

		intStack.push(7);
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