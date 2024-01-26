#include "../inc/Span.hpp"

int main() {
    try {
        Span span(10000);
        for (int i = 0; i < 10000; ++i) {
            span.addNumber(i);
        }

        std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << span.longestSpan() << std::endl;

        // Example using range of iterators (C++98 compatible)
        int additionalNumbersArray[] = {10001, 10002, 10003};
        std::vector<int> additionalNumbers(additionalNumbersArray, additionalNumbersArray + sizeof(additionalNumbersArray) / sizeof(int));
        // span.addNumber(additionalNumbers.begin(), additionalNumbers.end());

    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
		Span span(10000);
		std::vector<int> myNumbers;
		for (int i = 0; i < 10; i+= 2)
			myNumbers.push_back(i);
        span.addNumber(myNumbers);
        std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << span.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }
    return 0;
}
