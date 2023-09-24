#include "../inc/Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout  << type << " has been created." << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout  << type << " has been created by copying." << std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		std::cout  << type << " has been assigned." << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout  << type << " has been destroyed." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat meow." << std::endl;
}
