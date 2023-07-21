
#include "iter.hpp"

#include <iostream>

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
	iter(arr1, size1, swap);
	for (size_t i = 0; i < size1; ++i) {
		std::cout << arr1[i] << " ";
	}

}