#include "../inc/Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << type << " has been created." << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << type << " has been created by copying." << std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		std::cout << type << " has been assigned." << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << type << " has been destroyed." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog barks." << std::endl;
}
