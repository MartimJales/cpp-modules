#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern& Intern::operator=(const Intern& ) {
	return *this;
}

Intern::~Intern() {}

AForm* createShrubberyForm(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

AForm* createRobotomyForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}

AForm* createPresidentialForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}

const Intern::FormPair Intern::formPairs[] = {
    {"shrubbery creation", createShrubberyForm},
    {"robotomy request", createRobotomyForm},
    {"presidential pardon", createPresidentialForm}
};

const int Intern::numForms = sizeof(Intern::formPairs) / sizeof(Intern::FormPair);

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    for (int i = 0; i < numForms; ++i) {
        if (formPairs[i].name == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return formPairs[i].creator(target);
        }
    }
    throw Intern::UnknownFormException();
}

const char* Intern::UnknownFormException::what() const throw() {
	return "Unknown form type";
}
