#include <iostream>

template<class T>
class LinkedList {

private:

	struct Node {
		T data;
		Node * next;
	};

	Node * head;
	int size;

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


	T get_data(int index) {
		if (head == nullptr || size < index + 1) return 0;
		if (index == 0) return head->data;
		Node * previous_node = new Node;
		Node * current_node = head;
		for (int i = 0; i < index; i++) {
			previous_node = current_node;
			current_node = current_node->next;
		}
		return current_node->data;
	}

	int get_size() {
		return size;
	}

	void insert(int index, T data) {

		if (head == nullptr || index == 0) {
			Node * new_head = new Node;
			new_head->data = data;
			new_head->next = head;
			head = new_head;
			size++;
			return;
		}
		if (size == index + 1) {
			Node * last_node = head;
			while (last_node->next != nullptr)
				last_node = last_node->next;
			Node * new_last_node = new Node;
			new_last_node->data = data;
			new_last_node->next = nullptr;
			last_node->next = new_last_node;
			size++;
			return;
		}
		Node * previous_node = new Node;
		Node * current_node = head;
		for (int i = 0; i < index; i++) {
			previous_node = current_node;
			current_node = current_node->next;
		}
		Node * new_node = new Node;
		new_node->data = data;
		previous_node->next = new_node;
		new_node->next = current_node;
		size++;
	}

	void pop(int index) {
		if (head == nullptr) return;
		if (size < index + 1) return;
		if (head->next == nullptr || index == 0) {
			if (size == 1) {
				size--;
				return;
			}
			Node * second_last_node = head;
			while (second_last_node->next->next != nullptr)
				second_last_node = second_last_node->next;
			delete(second_last_node->next);
			second_last_node->next = nullptr;
			size--;
			return;
		}
		Node * node_to_pop = head;
		if (size == index + 1) {
			head = head->next;
			delete(node_to_pop);
			size--;
			return;
		}
		Node * previous_node = new Node;
		for (int i = 0; i < index; i++) {
			previous_node = node_to_pop;
			node_to_pop = node_to_pop->next;
		}
		previous_node->next = previous_node->next->next;
		delete(node_to_pop);
		size--;
	}
};
