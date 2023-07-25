
#ifndef ARRAY_HPP
#define ARRAY_HPP

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
			data[i] = T();
		}
	}

	Array(const Array& other) : data(new T[other.n]), n(other.n) {
		for (unsigned int i = 0; i < n; ++i)
			data[i] = other.data[i];
	}

	Array& operator=(const Array& other) {
		if (this != &other) {
			n = other.n;
			for (unsigned int i = 0; i < n; ++i)
				data[i] = other.data[i];
		}
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
			throw std::out_of_range("Index out of range.");
		}
		return data[index];
	}

	const T& operator[](unsigned int index) const {
		if (index >= n) {
			throw std::out_of_range("Index out of range.");
		}
		return data[index];
	}

	unsigned int size() const {
		return n;
	}

};

#endif //ARRAY_HPP
