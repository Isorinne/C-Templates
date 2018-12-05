#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;

template <class T>
class Stack {
private:
	vector<T> stack;

public:
	void push(T const&); 
	void pop();
	T top() const;

	bool empty() const {
		return stack.empty();
	}
};

template <class T>
void Stack<T>::push(T const& element) {
	stack.push_back(element);
}

template <class T>
void Stack<T>::pop() {
	if (stack.empty()) {
		throw out_of_range("Stack<T>::pop(): empty stack");
	}

	stack.pop_back();
}

template <class T>
T Stack<T>::top() const {
	if (stack.empty()) {
		throw out_of_range("Stack<T>::top(): empty stack");
	}

	return stack.back();
}