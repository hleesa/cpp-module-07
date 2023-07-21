
#ifndef CPP_HLEESA_MIN_HPP
#define CPP_HLEESA_MIN_HPP

template<typename T>
T min(const T& lhs, const T& rhs){
	if (lhs < rhs)
		return lhs;
	return rhs;
}

#endif //CPP_HLEESA_MIN_HPP
