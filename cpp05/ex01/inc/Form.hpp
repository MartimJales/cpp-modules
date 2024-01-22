#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form {
public:
	class GradeTooHighException : public std::exception {
        public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
        public:
			virtual const char* what() const throw();
	};

	Form(const std::string& name, int gradeToSign, int gradeToExecute);
	std::string getName() const;
	bool getIsSigned() const;
	int getGradeRequiredToSign() const;
	int getGradeRequiredToExecute() const;
	void beSigned(const Bureaucrat& bureaucrat);

private:
	const std::string name;
	bool isSigned;
	const int gradeRequiredToSign;
	const int gradeRequiredToExecute;
};
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
