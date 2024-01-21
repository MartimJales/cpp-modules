#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeRequiredToSign(gradeToSign), gradeRequiredToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
}

std::string Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return isSigned;
}

int Form::getGradeRequiredToSign() const {
    return gradeRequiredToSign;
}

int Form::getGradeRequiredToExecute() const {
    return gradeRequiredToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeRequiredToSign)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() << ", Is Signed: " << (form.getIsSigned() ? "Yes" : "No")
       << ", Grade Required To Sign: " << form.getGradeRequiredToSign()
       << ", Grade Required To Execute: " << form.getGradeRequiredToExecute();
    return os;
}
