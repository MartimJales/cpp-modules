	#include "../inc/Bureaucrat.hpp"
	#include "../inc/Form.hpp"

	int main() {
		Bureaucrat bob("Bob", 50);
		Bureaucrat alice("Alice", 30);
		Form taxForm("Tax Form", 45, 30);

		std::cout << taxForm << std::endl;

		try {
			alice.signForm(taxForm);
			bob.signForm(taxForm);
		} catch (std::exception& e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << taxForm << std::endl;
		return 0;
	}
