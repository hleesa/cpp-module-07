
#ifndef CPP_HLEESA_MAX_HPP
#define CPP_HLEESA_MAX_HPP

template<typename T>
T max(const T& lhs, const T& rhs){
	if (lhs > rhs)
		return lhs;
	return rhs;
}

#endif //CPP_HLEESA_MAX_HPP
