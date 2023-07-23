
#ifndef CPP_HLEESA_ITER_HPP
#define CPP_HLEESA_ITER_HPP

#include <iostream>
#include <stddef.h>

template<typename T>
void seoul(T& val) {
	val *= 42;
	return;
}

template<typename T>
void print(const T& val){
	std::cout << val << '\n';
	return;
}

template<typename T>
void iter(T* array, size_t size, void(* func)(T&)) {
	for (size_t i = 0; i < size; ++i) {
		func(array[i]);
	}
	return ;
}

template<typename T>
void iter(const T* array, size_t size, void(* func)(const T&)) {
	for (size_t i = 0; i < size; ++i) {
		func(array[i]);
	}
	return ;
}


#endif //CPP_HLEESA_ITER_HPP
