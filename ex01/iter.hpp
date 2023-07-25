
#ifndef CPP_HLEESA_ITER_HPP
#define CPP_HLEESA_ITER_HPP

#include <iostream>
#include <stddef.h>

template<typename T>
T seoul(T& val) {
	val *= 42;
	return val;
}

template<typename T>
T print(const T& val) {
	std::cout << val << '\n';
	return val;
}

template<typename T>
void iter(T* array, size_t size, T(* func)(T&)) {
	for (size_t i = 0; i < size; ++i) {
		func(array[i]);
	}
	return;
}

template<typename T>
void iter(const T* array, size_t size, T(* func)(const T&)) {
	for (size_t i = 0; i < size; ++i) {
		func(array[i]);
	}
	return;
}


#endif //CPP_HLEESA_ITER_HPP
