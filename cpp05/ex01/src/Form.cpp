#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

Form::Form() : name("default"), isSigned(false), gradeRequiredToSign(1), gradeRequiredToExecute(1) {}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeRequiredToSign(gradeToSign), gradeRequiredToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
}

Form::Form(const Form& form)
	: name(form.name), isSigned(form.isSigned), gradeRequiredToSign(form.gradeRequiredToSign),
	  gradeRequiredToExecute(form.gradeRequiredToExecute) {}

Form& Form::operator=(const Form& form) {
	if (this == &form) return *this;
	this->isSigned = form.isSigned;
	return *this;
}

Form::~Form() {}

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
    os << "Form: " << form.getName() << "\nSigned: " << (form.getIsSigned() ? "Yes" : "No")
       << "\nGrade Required To Sign: " << form.getGradeRequiredToSign()
       << "\nGrade Required To Execute: " << form.getGradeRequiredToExecute();
    return os;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade too high to change the form";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade too low to change the form";
}
