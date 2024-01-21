#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45, target) {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    checkExecution(executor); // Verifica se o formulário está assinado e se o burocrata tem grau suficiente.

    std::cout << "Drilling noises... " << std::endl;

    // Geração de número aleatório para determinar o sucesso da robotomização
    if (std::rand() % 2) {
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    } else {
        std::cout << "Robotomy on " << getTarget() << " failed." << std::endl;
    }
}
