#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << type << " has been created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	type = obj.type;
    std::cout << type << " has been created by copying." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    if (this != &obj)
    {
        type = obj.type;
        std::cout << type << " has been assigned." << std::endl;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << type << " has been destroyed." << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a strange sound." << std::endl;
}

std::string WrongAnimal::getType() const{
	return type;
}
