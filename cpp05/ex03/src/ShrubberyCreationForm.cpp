#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm(form) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form) {
	if (this == &form) return *this;
	AForm::operator=(form);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    checkExecution(executor); // Verifica se o formulário está assinado e se o grau do burocrata é suficiente.

	std::string filename = getTarget() + "_shrubbery";
    std::ofstream ofs(filename.c_str());
    if (!ofs) {
        std::cerr << "Erro: Não foi possível abrir o arquivo para escrita." << std::endl;
        return;
    }

    ofs << "        # #### ####\n"
           "      ### \\/#|### |/####\n"
           "     ##\\/#/ \\||/##/_/##/_#\n"
           "   ###  \\/###|/ \\/ # ###\n"
           " ##_\\_#\\_\\## | #/###_/_####\n"
           "## #### # \\ #| /  #### ##/##\n"
           " __#_--###`  |{,###---###-~\n"
           "           \\ }{\n"
           "            }}{\n"
           "            }}{\n"
           "       ejm  {{}\n"
           "      , -=-~{ .-^- _\n"
           "            `}\n"
           "             {\n";



    ofs.close();
}
