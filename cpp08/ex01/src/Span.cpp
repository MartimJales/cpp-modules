#include "../inc/Span.hpp"

Span::Span(unsigned int N) : max_size(N) {}

void Span::addNumber(int number) {
    if (numbers.size() >= max_size) {
        throw std::length_error("Maximum capacity reached");
    }
    numbers.push_back(number);
}

int Span::shortestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span");
    }
    std::vector<int> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    int min_span = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sorted_numbers.size() - 1; ++i) {
        int span = sorted_numbers[i + 1] - sorted_numbers[i];
        if (span < min_span) {
            min_span = span;
        }
    }
    return min_span;
}

int Span::longestSpan() const {
	if (numbers.size() < 2) {
		throw std::logic_error("Not enough numbers to find a span");
	}
	int min = *std::min_element(numbers.begin(), numbers.end());
	int max = *std::max_element(numbers.begin(), numbers.end());
	return max - min;
}
