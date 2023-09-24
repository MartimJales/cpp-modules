#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << type << " has been created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << type << " has been created by copying." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
	{
		WrongAnimal::operator=(obj);
		std::cout << type << " has been assigned." << std::endl;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << type << " has been destroyed." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat wrongmeow." << std::endl;
}
