#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

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