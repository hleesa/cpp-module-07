
#ifndef MAX_HPP
#define MAX_HPP

template<typename T>
T max(const T& lhs, const T& rhs){
	if (lhs > rhs)
		return lhs;
	return rhs;
}

#endif //MAX_HPP
