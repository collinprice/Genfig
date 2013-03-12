#include "genfig.h"
#include <iostream>

int main() {

	Genfig test("sample.cfg");

	std::cout << "name: " << test.getString("name") << std::endl;

	if (test.hasKey("age")) {
		std::cout << "age: " << test.getInt("age") << std::endl;
	}
	

	return 0;
}
