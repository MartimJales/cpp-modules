#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main() {
    Intern someRandomIntern;
    AForm* form;

    // Teste para criar um RobotomyRequestForm
    form = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form) {
        Bureaucrat bob("Bob", 1);
        bob.signForm(*form);
        bob.executeForm(*form);
        delete form;
    } else {
        std::cout << "Failed to create RobotomyRequestForm" << std::endl;
    }

    std::cout << std::endl;

    form = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (form) {
        Bureaucrat alice("Alice", 1);
        alice.signForm(*form);
        alice.executeForm(*form);
        delete form;
    } else {
        std::cout << "Failed to create ShrubberyCreationForm" << std::endl;
    }

    std::cout << std::endl;

    form = someRandomIntern.makeForm("presidential pardon", "Charlie");
    if (form) {
        Bureaucrat charlie("Charlie", 1);
        charlie.signForm(*form);
        charlie.executeForm(*form);
        delete form;
    } else {
        std::cout << "Failed to create PresidentialPardonForm" << std::endl;
    }

    std::cout << std::endl;

    try {
        form = someRandomIntern.makeForm("unknown form", "Unknown");
        // Se a exceção não for lançada, deletar o formulário
        if (form) {
            delete form;
        }
    } catch (const Intern::UnknownFormException& e) {
        std::cerr  <<  "Exception: " << e.what() << std::endl;
    }

    return 0;
}
