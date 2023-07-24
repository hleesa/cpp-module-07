
#ifndef CPP_HLEESA_ARRAY_HPP
#define CPP_HLEESA_ARRAY_HPP

#include <cstdlib>
#include <stdexcept>

template<typename T>
class Array {

private:
	T* data;
	unsigned int n;

public:

	Array() : data(new T(0)), n(0) {
	}

	Array(unsigned int n) : data(new T[n]), n(n) {
		for (unsigned int i = 0; i < n; ++i) {
			data[i] = 0;
		}
	}

	Array(const Array& other) : data(new T(other.n)), n(other.n) {
		for (unsigned int i = 0; i < n; ++i)
			data[i] = other.data[i];
	}

	Array& operator=(const Array& other) {
		for (unsigned int i = 0; i < n; ++i)
			data[i] = other.data[i];
		return *this;
	}

	~Array() {
		if (data != NULL) {
			if (n == 0) {
				delete data;
			}
			else {
				delete[] data;
			}
		}
	}

	T& operator[](unsigned int index) {
		if (index >= n) {
			if (n == 0) {
				return *this->data;
			}
			else {
				throw std::out_of_range("Index out of range.");
			}
		}
		return data[index];
	}

	const T& operator[](unsigned int index) const {
		if (index >= n) {
			if (n == 0) {
				return *this->data;
			}
			else {
				throw std::out_of_range("Index out of range.");
			}
		}
		return data[index];
	}

	unsigned int size() const {
		return n;
	}

};

#endif //CPP_HLEESA_ARRAY_HPP
