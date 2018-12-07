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
	int size = 0;


public:

	List();
	void insert(T newData, int index);
	void pop(int index);
	T get(int index);
	int getSize();
	~List();
};



template<class T>
List<T>::List()
{

}

template<class T>
T List<T>::get(int index)
{
	Node *current = head;
	int count = 0;
	while (current != NULL)
	{
		if (count == index)
		{
			return current->data;
		}
		count++;
		current = current->next;
	}
	return 0;
}


template<class T>
int List<T>::getSize()
{
	int count = 0;
	Node *node = head;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return count;
}



template<class T>
void List<T>::insert(T newData, int index)
{
	if (index < 0)
	{
		return;
	}
	Node *current = head, *prev = NULL;
	for (int i = 1; i < index; i++)
	{
		if (!current)
		{
			return;
		}

		prev = current;
		current = current->next;
	}

	Node *newNode = new Node;
	newNode->data = newData;

	newNode->prev = prev;
	newNode->next = current;

	if (newNode->prev)
	{
		newNode->prev->next = newNode;
	}
	else
	{
		head = newNode;
	}
	if (newNode->next)
	{
		newNode->next->prev = newNode;
	}
	else
	{
		tail = newNode;
	}
}



template<class T>
void List<T>::pop(int index)
{
	Node *deleteNode = NULL, *current = head;
	if (!head)
	{
		return;
	}
	else if (index == 1)
	{
		head = current->next;
		head->prev = NULL;
		return;
	}
	else if (index > getSize() || index <= 0)
	{
		return;
	}
	else
	{
		for (int i = 1; i < index; i++)
		{
			deleteNode = current;
			current = current->next;
		}
		if (index == getSize())
		{
			deleteNode->next = current->next;
			delete current;
			return;
		}
		deleteNode->next = current->next;
		current->next->prev = deleteNode;
		delete current;
	}
}


template<class T>
List<T>::~List()
{

}