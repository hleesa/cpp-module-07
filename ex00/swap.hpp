
#ifndef SWAP_HPP
#define SWAP_HPP

template<typename T>
void swap(T& lhs, T& rhs) {
	T temp = lhs;
	lhs = rhs;
	rhs = temp;
	return;
}

#endif //SWAP_HPP
