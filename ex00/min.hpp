
#ifndef MIN_HPP
#define MIN_HPP

template<typename T>
T min(const T& lhs, const T& rhs){
	if (lhs < rhs)
		return lhs;
	return rhs;
}

#endif //MIN_HPP
