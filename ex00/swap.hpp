
#ifndef CPP_HLEESA_SWAP_HPP
#define CPP_HLEESA_SWAP_HPP

template<typename T>
void swap(T& lhs, T& rhs) {
	T temp = lhs;
	lhs = rhs;
	rhs = temp;
	return;
}

#endif //CPP_HLEESA_SWAP_HPP
