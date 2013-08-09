#include "genfig.h"
#include <iostream>

int main() {

	Genfig test("sample.cfg");

	// std::cout << "name: " << test.getString("name") << std::endl;

	// if (test.hasKey("age")) {
	// 	std::cout << "age: " << test.getInt("age") << std::endl;
	// }

	// test.writeToFile("output.cfg");
	
	// std::vector<std::string> names = test.getStringList("names");

	// for (std::vector<std::string>::iterator i = names.begin(); i != names.end(); ++i)
	// {
	// 	std::cout << *i << std::endl;
	// }

	std::vector<int> doubles = test.getIntList("ints");

	for (std::vector<int>::iterator i = doubles.begin(); i != doubles.end(); ++i)
	{
		std::cout << *i << std::endl;
	}


	return 0;
}
