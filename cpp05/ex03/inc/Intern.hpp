#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
public:
    class UnknownFormException : public std::exception {
    public:
        const char* what() const throw();
    };

    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern&);
    ~Intern();

    AForm* makeForm(const std::string& formName, const std::string& target) const;

private:
    typedef AForm* (*FormCreator)(const std::string&);
    struct FormPair {
        std::string name;
        FormCreator creator;
    };

    static const FormPair formPairs[];
    static const int numForms;
};

#endif
