
#ifndef CPP_HLEESA_ITER_HPP
#define CPP_HLEESA_ITER_HPP

#include <stddef.h>

template<typename T>
void swap(T& lhs, T& rhs) {
	T temp = lhs;
	lhs = rhs;
	rhs = temp;
	return;
}

template<typename T>
void iter(T* array, size_t size, void(* func)(T&, T&)) {
	for (size_t i = 0; i + 1 < size; ++i) {
		func(array[i], array[i + 1]);
	}
	return ;
}


#endif //CPP_HLEESA_ITER_HPP
