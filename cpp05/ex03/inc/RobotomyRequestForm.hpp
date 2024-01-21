#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>


class RobotomyRequestForm : public AForm {
public:
	RobotomyRequestForm();
    RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& form);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& form);
	virtual ~RobotomyRequestForm();

	virtual void execute(Bureaucrat const & executor) const;
};

#endif
