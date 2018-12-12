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
		Node * curr = nullptr;

		while (head->next != nullptr) {
			curr = head->next;
			head->next = head->next->next;
			delete(curr);
		}

		delete(head);
	}

	T get(unsigned int index) {
		Node * temp = head;
		unsigned int ctr = 0;

		while (temp != nullptr) {
			if (ctr == index) return temp->data;

			ctr++;
			temp = temp->next;
		}
	}

	int length() {
		return size;
	}

	void insert(unsigned int index, T data) {
		Node* temp = head;
		Node* node = new Node;
		node->data = data;
		node->next = nullptr;

		if (index == 0) {
			head = node;
			head->next = temp;
			size++;
			return;
		}

		else {
			unsigned int ctr = 0;
			Node* prev = new Node;

			while (ctr != index) {
				if (ctr == (index - 1)) {
					prev = temp;
				}
				temp = temp->next;
				ctr++;
			}

			prev->next = node;
			node->next = temp;
			size++;
			return;
		}
	}

	void pop(unsigned int index) {
		if (size == 0 || size < index + 1) return;

		if (size == 1) { size--; return; }

		Node * node = head;

		if (head->next == nullptr || index == 0) {
			head = head->next;
			delete(node);
		}

		else if (size == index + 1) {
			while (node->next->next != nullptr)
				node = node->next;

			delete(node->next);
			node->next = nullptr;
		}

		else {
			Node * temp = new Node;
			for (unsigned int i = 0; i < index; i++) {
				temp = node;
				node = node->next;
			}
			temp->next = temp->next->next;
			delete(node);
		}
		size--;
		return;
	}
};
