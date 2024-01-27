#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <limits>
#include <iterator>

class Span {
	public:
		//OCF
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		//Methods
		void addNumber(int number);
		template <typename T>
		void addNumber(T begin, T end);
		int shortestSpan() const;
		int longestSpan() const;

	private:
		std::vector<int> numbers;
		unsigned int max_size;
};

#include "Span.tpp"

#endif
