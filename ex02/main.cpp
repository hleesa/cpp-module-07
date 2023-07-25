
#include "Array.hpp"
#include <iostream>

void test0() {

	int emptyArray[0];
	std::cout << "Size of emptyArray: " << sizeof(emptyArray) << "\n\n";

	int* a = new int();
	std::cout << "*a: " << *a << "\n\n";

	Array<int>* b = new Array<int>();
	std::cout << "b->size(): " << b->size() << '\n';
	try {
		std::cout << (*b)[1] << '\n';
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	delete a;
	delete b;
	std::cout << "\n##############################################\n\n";
}

void test1() {
	Array<double> d = Array<double>(5);
	for (unsigned int i = 0; i < d.size(); ++i) {
		std::cout << d[i] << ", ";
	}
	std::cout << '\n';
	for (unsigned int i = 0; i < d.size(); ++i) {
		d[i] = 3.14 + i;
	}
	for (unsigned int i = 0; i < d.size(); ++i) {
		std::cout << d[i] << ", ";
	}
	std::cout << "\n\n";
	try {
		std::cout << d[-1];
	} catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << d[d.size()];
	} catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "\n##############################################\n\n";
}

void test2() {
	Array<std::string> str = Array<std::string>(5);
	for (unsigned int i = 0; i < str.size(); ++i) {
		std::cout << str[i] << ", ";
	}
	std::cout << '\n';
	for (unsigned int i = 0; i < str.size(); ++i) {
		str[i] = "salee2";
	}
	for (unsigned int i = 0; i < str.size(); ++i) {
		std::cout << str[i] << ", ";
	}
	std::cout << "\n\n\n";
	Array<std::string> temp = str;
	for (unsigned int i = 0; i < str.size(); ++i) {
		std::cout << temp[i] << ", ";
	}
	for (unsigned int i = 0; i < str.size(); ++i) {
		temp[i] = "member";
	}
	std::cout << "\n\n\n";
	for (unsigned int i = 0; i < str.size(); ++i) {
		std::cout << str[i] << ", ";
	}
	std::cout << '\n';
	for (unsigned int i = 0; i < str.size(); ++i) {
		std::cout << temp[i] << ", ";
	}

	std::cout << "\n\n##############################################\n\n";
}

void test3(){
	const Array<std::string> str = Array<std::string>(5);
	for (unsigned int i = 0; i < str.size(); ++i) {
		std::cout << str[i] << ", ";
	}
	std::cout << "\n\n##############################################\n\n";
}

int main() {
	std::cout << "##############################################\n\n";
	test0();
	test1();
	test2();
	test3();

//	system("leaks array");
	return 0;
}