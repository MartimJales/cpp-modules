#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

// Default constructor
Bureaucrat::Bureaucrat() : name(""), grade(150) {}

// Parameterized constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1) throw GradeTooHighException();
    if (grade > 150) throw GradeTooLowException();
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

// Assignment operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        // As 'name' is a const member, it can't be assigned a new value. Only 'grade' is assignable.
        grade = other.grade;
    }
    return *this;
}

// Destructor
Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade <= 1) throw GradeTooHighException();
    --grade;
}

void Bureaucrat::decrementGrade() {
    if (grade >= 150) throw GradeTooLowException();
    ++grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void Bureaucrat::signForm(Form& form) {
	form.beSigned(*this);
	std::cout << getName() << " signed " << form.getName() << std::endl;
}
