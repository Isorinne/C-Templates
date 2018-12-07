#pragma once
#include <iostream>
template<class T>
class List
{
private:
	struct Node
	{
		T data;
		struct Node * next;
		struct Node * prev;
	};

	Node* head;
	Node* tail;


public:

	List();
	void push(T newData);
	void append(T newData);
	void insert(T newData);
	void pop(T index);
	void get(T index);
	void deleteFront();
	void deleteLast();
	void printList();
	~List();
};



template<class T>
List<T>::List()
{

}


//template<class T>
//void List<T>::push(T newData)
//{
//	Node *newNode = new Node;
//	newNode->data = newData;
//	newNode->next = head;
//	newNode->prev = nullptr;
//
//	if (head)
//		head->prev = newNode;
//	head = newNode;
//
//	if (!tail)
//		tail = newNode;
//}


template<class T>
void List<T>::insert(T newData)
{
	Node * newNode = new Node;

}



template<class T>
void List<T>::pop(T index)
{

}


template<class T>
void List<T>::get(T index)
{

}


//template<class T>
//void List<T>::append(T newData)
//{
//	Node *newNode = new Node;
//	newNode->data = newData;
//	newNode->next = nullptr;
//	newNode->prev = tail;
//
//	if (!head)
//		head = newNode;
//
//	if (tail)
//		tail->next = newNode;
//	tail = newNode;
//}
//
//template<class T>
//void List<T>::deleteFront()
//{
//	Node * deleteNode = head;
//	head = head->next;
//	head->prev = nullptr;
//	delete(deleteNode);
//}
//
//template<class T>
//void List<T>::deleteLast()
//{
//	Node * deleteNode = tail;
//	while (deleteNode->next != nullptr)
//	{
//		deleteNode = deleteNode->next;
//	}
//	tail->prev = deleteNode->prev;
//	tail->prev->next = nullptr;
//	delete(deleteNode);
//}
//
//
//template<class T>
//void List<T>::printList()
//{
//	Node * tempHead = head;
//	while (tempHead != nullptr)
//	{
//		std::cout << tempHead->data << std::endl;
//		tempHead = tempHead->next;
//	}
//}

template<class T>
List<T>::~List()
{

}