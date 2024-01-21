#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("PresidentialPardonForm", 25, 5, target) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    checkExecution(executor); // Verifica se o formulário está assinado e se o burocrata tem grau suficiente.

    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
