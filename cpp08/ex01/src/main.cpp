#include "../inc/Span.hpp"

int main() {

	std::cout << "=== Test from subject ===" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::cout << "======= My tests ========" << std::endl;
	try {
        Span span(100);
		std::cout << "Span from 1 -> 100:" << std::endl;
        for (int i = 0; i < 100; ++i) {
            span.addNumber(i);
        }

        std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << span.longestSpan() << std::endl;

    std::cout << "=========================" << std::endl;
		std::cout << "Try to add another number: " << std::endl;
		span.addNumber(42);

    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    try {
		Span span(10);
		std::vector<int> myNumbers;
		std::cout << "Vector with pairs from 1 -> 10:" << std::endl;
		for (int i = 0; i < 10; i+= 2)
			myNumbers.push_back(i);
		std::cout << "Span created with vector" << std::endl;
        span.addNumber(myNumbers.begin(), myNumbers.end());
        std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << span.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;
    return 0;
}
