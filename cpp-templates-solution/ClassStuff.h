#pragma once
#include <string>

class Stuff {
private:

public:
	int intStuff;
	std::string stringStuff;
	double doubleStuff;
	Stuff() {
		intStuff = 6732;
		stringStuff = "Hello";
		doubleStuff = 28.124;
	}
	~Stuff() {}
};