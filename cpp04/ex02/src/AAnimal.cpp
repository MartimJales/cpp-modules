#include "../inc/AAnimal.hpp"

AAnimal::AAnimal(){}

AAnimal::AAnimal(AAnimal const& animal)
{
    *this = animal;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs)
{
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << type << " has been destroyed." << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << type << " makes a generic sound." << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}

