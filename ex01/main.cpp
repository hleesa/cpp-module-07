
#include "iter.hpp"

#include <iostream>

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
	::iter(arr1, size1, swap);
	for (size_t i = 0; i < size1; ++i) {
		std::cout << arr1[i] << " ";
	}
	std::cout << "\n======================================\n";
	double arr2[] = {1.5, 2.5, 3.5, 4.5, 5.5};
	size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
	::iter(arr2, size1, swap);
	for (size_t i = 0; i < size2; ++i) {
		std::cout << arr2[i] << " ";
	}

}