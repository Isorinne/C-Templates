#pragma once

template<class T>
class LinkedList
{
private:

	template<class T>
	struct Node {
		T data;
		Node<T> *next;
	};

	template<class T>
	struct List {
		Node<T> *head;
	};
	

public:
	LinkedList();
	~LinkedList();

	void push(T data);
	void append();
	void insert();
	void reverse();
	void push();
	void pop();
	void popLast();
	void popFirst();
	void printList();
	int getLength();
	
};



template <class T>
LinkedList<class T>::LinkedList() {

}

template <class T>
LinkedList<class T>::~LinkedList() {

}


template <class T>
void LinkedList<T>::push(T data) {
	Node<T>* temp_head = new Node<T>;
	temp_head->data = data;

}

template <class T>
void LinkedList<T>::append() {

}

template <class T>
void LinkedList<T>::insert() {

}

template <class T>
void LinkedList<T>::reverse() {

}

template <class T>
void LinkedList<T>::push() {

}

template <class T>
void LinkedList<T>::pop() {

}
template <class T>
void LinkedList<T>::popLast() {

}

template <class T>
void LinkedList<T>::popFirst() {

}

template <class T>
void LinkedList<T>::printList() {

}

template <class T>
int LinkedList<T>::getLength() {

}