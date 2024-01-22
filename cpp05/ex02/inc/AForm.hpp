#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat;

class AForm {
	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
	AForm();
	AForm(const std::string& name, int gradeToSign, int gradeToExecute, const std::string& target);
	AForm(AForm const& form);
	AForm& operator=(AForm const& form);
	virtual ~AForm() {}

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeRequiredToSign() const;
	int getGradeRequiredToExecute() const;
	std::string getTarget() const;
	virtual void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;


	private:
		const std::string name;
		bool isSigned;
		const int gradeRequiredToSign;
		const int gradeRequiredToExecute;
		std::string target;

	protected:
		void checkExecution(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
