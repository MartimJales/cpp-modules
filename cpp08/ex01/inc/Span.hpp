#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <limits>


class Span {
public:
	Span();
    Span(unsigned int N);
    void addNumber(int number);
	void addNumber(const std::vector<int>& numbers);


    int shortestSpan() const;
    int longestSpan() const;

private:
    std::vector<int> numbers;
    unsigned int max_size;
};

#endif // SPAN_HPP
