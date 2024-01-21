#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form {
public:
    class GradeTooHighException : public std::exception {
        const char* what() const throw() {
            return "Form::Grade too high";
        }
    };

    class GradeTooLowException : public std::exception {
        const char* what() const throw() {
            return "Form::Grade too low";
        }
    };

private:
    const std::string name;
    bool isSigned;
    const int gradeRequiredToSign;
    const int gradeRequiredToExecute;

public:
    Form(const std::string& name, int gradeToSign, int gradeToExecute);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;

    void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
