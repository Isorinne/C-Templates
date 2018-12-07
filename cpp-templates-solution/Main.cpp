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
	
}