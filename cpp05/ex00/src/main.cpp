#include "../inc/Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b("Alice", 2);
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try {
		Bureaucrat b("Bob", 149);
		std::cout << b << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;
		b.decrementGrade();
	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
