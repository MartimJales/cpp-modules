#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
public:
    virtual ~AAnimal();
    virtual void makeSound() const = 0;

    std::string getType() const;

private:
    std::string type;
};


#endif

