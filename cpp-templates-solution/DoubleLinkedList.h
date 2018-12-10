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
	void insert(int index, T newData);
	void pop(int index);
	T get(int index);
	int getSize();
	~List();
};



template<class T>
List<T>::List()
{
	head = nullptr;
}

template<class T>
T List<T>::get(int index)
{
	Node *current = head;
	int count = 0;
	while (current != nullptr)
	{
		if (count == index)
		{
			return current->data;
		}
		count++;
		current = current->next;
	}
}


template<class T>
int List<T>::getSize()
{
	return size;
}



template<class T>
void List<T>::insert(int index, T newData)
{
	if (index < 0)
	{
		return;
	}

	Node *current = head, *prev = nullptr;
	for (int i = 0; i < index; i++)
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
	size++;
}



template<class T>
void List<T>::pop(int index)
{
	Node *deleteNode = nullptr, *current = head;
	if (!head)
	{
		return;
	}
	else if (index == 1)
	{
		head = current->next;
		size--;
		return;
	}
	else if (index > getSize() || index <= 0)
	{
		size--;
		return;
	}
	else
	{
		for (int i = 0; i < index; i++)
		{
			deleteNode = current;
			current = current->next;
		}
		if (index == getSize()-1)
		{
			deleteNode->next = current->next;
			delete current;
			size--;
			return;
		}
		deleteNode->next = current->next;
		current->next = deleteNode;
		size--;
		delete current;
	}
}


template<class T>
List<T>::~List()
{

}