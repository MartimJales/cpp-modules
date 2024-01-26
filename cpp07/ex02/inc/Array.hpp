
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <iostream>

template <typename T>
class Array
{
	public:
		// Exceptions
		class InvalidIndexException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		// OCF
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		// Methods
		T& operator[](unsigned int i);
		const T& operator[](unsigned int i) const;
		unsigned int size() const;

	private:
		T* _array;
		unsigned int _size;
};

#include "Array.tpp"

#endif
