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
		Node * temp_head = head;
		unsigned int counter = 0;

		while (temp_head != nullptr) {
			if (counter == index) return temp_head->data;

			counter++;
			temp_head = temp_head->next;
		}
	}

	int length() {
		return size;
	}

	void insert(unsigned int index, T data) {
		if (size < index) return;

		Node* temp_head = head;
		Node* new_node = new Node;
		new_node->data = data;
		new_node->next = nullptr;

		if (index == 0) {
			head = new_node;
			head->next = temp_head;
		}

		else {
			unsigned int counter = 0;
			Node* temp_ptr = nullptr;

			while (counter != index) {
				if (counter == (index - 1)) {
					temp_ptr = temp_head;
				}
				temp_head = temp_head->next;
				counter++;
			}

			temp_ptr->next = new_node;
			new_node->next = temp_head;
		}
		size++;
		return;
	}

	void pop(unsigned int index) {
		if (size == 0 || size < index + 1) return;

		if (size == 1) { size--; return; }

		Node * temp_head = head;

		if (head->next == nullptr || index == 0) {
			head = head->next;
			delete temp_head;
		}

		else if (size == index + 1) {
			while (temp_head->next->next != nullptr)
				temp_head = temp_head->next;

			delete temp_head->next ;
			temp_head->next = nullptr;
		}

		else {
			Node * temp_ptr = nullptr;
			for (unsigned int i = 0; i < index; i++) {
				temp_ptr = temp_head;
				temp_head = temp_head->next;
			}
			temp_ptr->next = temp_ptr->next->next;
			delete temp_head;
		}
		size--;
	}
};
