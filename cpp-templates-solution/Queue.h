#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <assert.h>
using namespace std;

template <class T>
class Queue {
private:
	std::vector<T> queue;

public:
	void push(T const&);
	void pop();
	T bot() const;

	bool empty() const {
		return queue.empty();
	}
};

template <class T>
void Queue<T>::push(T const& element) {
	queue.push_back(element);
}

template <class T>
void Queue<T>::pop() {
	if (queue.empty()) {
		throw out_of_range("Queue<T>::pop(): empty queue");
	}
	assert(!queue.empty());
	queue.erase(queue.begin());
}

template <class T>
T Queue<T>::bot() const {
	if (queue.empty()) {
		throw out_of_range("Queue<T>::top(): empty queue");
	}
	return queue.front();
}