
#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"
#include <iostream>

void test0() {
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	std::cout << "\n##############################################\n\n";
}

void test1() {
	const char a = 'A';
	const char b = 'B';
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::cout << "\n##############################################\n\n";
}

int main(void) {
	std::cout << "##############################################\n\n";
	test0();
//	test1();

//	system("leaks fewfunctions");
	return 0;
}