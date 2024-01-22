#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& form);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);
		virtual ~ShrubberyCreationForm();

		virtual void execute(Bureaucrat const & executor) const ;
};

#endif
