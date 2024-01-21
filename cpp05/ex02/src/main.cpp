#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

int main() {
    std::srand(std::time(0));

    try {
        Bureaucrat bob("Bob", 50);
        Bureaucrat alice("Alice", 4);
        Bureaucrat john("John", 150);

        // Test ShrubberyCreationForm
        ShrubberyCreationForm shrubForm("home");
        std::cout << shrubForm << std::endl;
        bob.signForm(shrubForm);
        bob.executeForm(shrubForm);
        john.executeForm(shrubForm); // Test with insufficient grade

        std::cout << std::endl;

        // Test RobotomyRequestForm
        RobotomyRequestForm robotForm("Bob");
        std::cout << robotForm << std::endl;
        bob.signForm(robotForm);
        alice.executeForm(robotForm);
        john.executeForm(robotForm); // Test with insufficient grade

        std::cout << std::endl;

        // Test PresidentialPardonForm
        PresidentialPardonForm pardonForm("Alice");
        alice.signForm(pardonForm);
        alice.executeForm(pardonForm);
        john.executeForm(pardonForm); // Test with insufficient grade

        // Test execution of unsigned form
        ShrubberyCreationForm unsignedShrubForm("office");
        bob.executeForm(unsignedShrubForm); // Should fail because it's not signed

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
