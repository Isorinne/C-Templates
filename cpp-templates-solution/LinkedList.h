#include <iostream>

template<class T>
class LinkedList {

private:

	struct Node {
		T data;
		Node * next;
	};

	Node * head;
	size_t size = 0;

public:

	LinkedList() {
		head = nullptr;
	}

	~LinkedList() {
		if (this->head == nullptr) return;

		Node * current = nullptr;

		while (head->next != nullptr) {
			current = head->next;
			head->next = head->next->next;
			delete current ;
		}

		delete head;
	}

	T get(unsigned int index) {
		Node * current = head;
		unsigned int counter = 0;

		while (current != nullptr) {
			if (counter == index)
				return current->data;

			counter++;
			current = current->next;
		}
	}

	int length() {
		return size;
	}

	void insert(unsigned int index, T data) {
		if (size < index) return;

		Node * current = head;
		Node * new_node = new Node;
		new_node->data = data;
		new_node->next = nullptr;

		if (index == 0) {
			head = new_node;
			head->next = current;
		}

		else {
			unsigned int counter = 0;
			Node * temp_node = nullptr;

			while (counter != index) {
				if (counter == (index - 1))
					temp_node = current;
			
				current = current->next;
				counter++;
			}

			temp_node->next = new_node;
			new_node->next = current;
		}
		size++;
		return;
	}

	void pop(unsigned int index) {
		if (size == 0 || size < index + 1) return;

		if (size == 1) { size--; return; }

		Node * current = head;

		if (head->next == nullptr || index == 0) {
			head = head->next;
			delete current;
		}

		else if (size == index + 1) {
			while (current->next->next != nullptr)
				current = current->next;

			delete current->next ;
			current->next = nullptr;
		}

		else {
			Node * temp_node = nullptr;
			for (unsigned int i = 0; i < index; i++) {
				temp_node = current;
				current = current->next;
			}
			temp_node->next = temp_node->next->next;
			delete current;
		}
		size--;
	}
};
