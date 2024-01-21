#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute, const std::string& target)
    : name(name), isSigned(false), gradeRequiredToSign(gradeToSign), gradeRequiredToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
	this->target = target;
}

std::string AForm::getName() const {
    return name;
}

bool AForm::getIsSigned() const {
    return isSigned;
}

int AForm::getGradeRequiredToSign() const {
    return gradeRequiredToSign;
}

int AForm::getGradeRequiredToExecute() const {
    return gradeRequiredToExecute;
}

std::string AForm::getTarget() const {
	return target;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeRequiredToSign)
        throw GradeTooLowException();
    this->isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
    os << "AForm: " << form.getName() << "\nSigned: " << (form.getIsSigned() ? "Yes" : "No")
       << "\nGrade Required To Sign: " << form.getGradeRequiredToSign()
       << "\nGrade Required To Execute: " << form.getGradeRequiredToExecute();
    return os;
}

void AForm::checkExecution(const Bureaucrat& executor) const {
	if (!isSigned) throw FormNotSignedException();
	if (executor.getGrade() > gradeRequiredToExecute) throw GradeTooLowException();
}
