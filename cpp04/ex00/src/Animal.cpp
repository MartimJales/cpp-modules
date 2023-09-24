#include "../inc/Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << type << " has been created." << std::endl;
}

Animal::Animal(const Animal &obj)
{
	type = obj.type;
    std::cout << type << " has been created by copying." << std::endl;
}

Animal& Animal::operator=(const Animal &obj)
{
    if (this != &obj)
    {
        type = obj.type;
        std::cout << type << " has been assigned." << std::endl;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << type << " has been destroyed." << std::endl;
}

void Animal::makeSound() const
{
    std::cout << type << " makes a generic sound." << std::endl;
}

std::string Animal::getType() const{
	return type;
}
