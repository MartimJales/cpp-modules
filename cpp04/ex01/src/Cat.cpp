#include "../inc/Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << type << " has been created." << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    type = "Cat";
    brain = new Brain(*(obj.brain));
    std::cout << type << " has been created by copying." << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    if (this != &obj)
    {
        Animal::operator=(obj);
        delete brain;
        brain = new Brain(*(obj.brain));
        std::cout << type << " has been assigned." << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << type << " has been destroyed." << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Cat meows." << std::endl;
}
