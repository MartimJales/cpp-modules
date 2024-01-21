#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form) : AForm(form) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form) {
	if (this == &form) return *this;
	AForm::operator=(form);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    checkExecution(executor); // Verifica se o formulário está assinado e se o burocrata tem grau suficiente.

    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
