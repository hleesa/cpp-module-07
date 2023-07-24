
#include "Array.hpp"
#include <iostream>

int main() {
	int* a = new int();
	std::cout << *a << '\n';
	std::cout << "===============================\n";
	Array<int>* b = new Array<int>(0);
	std::cout << (*b)[0] << '\n';
	std::cout << b->size() << '\n';

	Array<double> d = Array<double>(5);
	for (unsigned int i = 0; i < d.size(); ++i) {
		d[i] = 3.14 + i;
	}
	for (unsigned int i = 0; i < d.size(); ++i) {
		std::cout << d[i] << ' ';
	}
	std::cout << '\n';
	try {
		std::cout << d[-1] << '\n';
	} catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << d[d.size() + 1] << '\n';
	} catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "===============================\n";

	return 0;
}