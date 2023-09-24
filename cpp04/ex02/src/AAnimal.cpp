#include "../inc/AAnimal.hpp"

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

