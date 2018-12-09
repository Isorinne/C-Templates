#include <iostream>

template<class T>
class LinkedList {

private:

	struct Node {
		T data;
		Node * next;
	};

	Node * head;
	unsigned int size;

public:

	LinkedList() {
		size = 0;
		head = nullptr;
	}

	~LinkedList<T>() {
		Node * current_node = nullptr;
		while (head->next != nullptr) {
			current_node = head->next;
			head->next = head->next->next;
			delete(current_node);
		}
		delete(head);
	}


	T get(int index) {
		Node * temp_node = head;
		unsigned int ctr = 0;
		while (temp_node != nullptr) {
			if (ctr == index) return temp_node->data;
			ctr++;
			temp_node = temp_node->next;
		}
	}

	int length() {
		return size;
	}

	void insert(int index, T data) {
		Node * new_node = new Node;
		new_node->data = data;
		if (head == nullptr || index == 0) {
			new_node->next = head;
			head = new_node;
			size++;
			return;
		}
		Node * temp_node = head;
		if (size == index + 1) {
			while (temp_node->next != nullptr)
				temp_node = temp_node->next;
			new_node->next = nullptr;
			temp_node->next = new_node;
			size++;
			return;
		}
		Node * previous_node = new Node;
		for (int i = 0; i < index; i++) {
			previous_node = temp_node;
			temp_node = temp_node->next;
		}
		previous_node->next = new_node;
		new_node->next = temp_node;
		size++;
	}

	void pop(int index) {
		if (head == nullptr || size < index + 1) return;
		Node * node = head;
		if (head->next == nullptr || index == 0) {
			if (size == 1) {
				size--;
				return;
			}
			while (node->next->next != nullptr)
				node = node->next;

			delete(node->next);
			node->next = nullptr;
			size--;
			return;
		}
		if (size == index + 1) {
			head = head->next;
			delete(node);
			size--;
			return;
		}
		Node * temp_node = new Node;
		for (int i = 0; i < index; i++) {
			temp_node = node;
			node = node->next;
		}
		temp_node->next = temp_node->next->next;
		delete(node);
		size--;
	}
};
