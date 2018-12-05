#pragma once

template<class T>
class LinkedList
{
private:
	template<class T>
	struct Node {
		T data;
		Node<T> *head;
	};

public:
	LinkedList();
	~LinkedList();

	void insertFirst();
	void insertEnd();
	void insertAtPosition();
	void reverse();
	void push();
	void pop();
	void popLast();
	void popFirst();
	void printList();
	int getLength();
	
};


