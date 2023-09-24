#include "../inc/Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << type << " has been created." << std::endl;
}

Dog::Dog(const Dog &obj) : AAnimal(obj)
{
    type = "Dog";
    brain = new Brain(*(obj.brain));
    std::cout << type << " has been created by copying." << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    if (this != &obj)
    {
        AAnimal::operator=(obj);
        delete brain;
        brain = new Brain(*(obj.brain));
        std::cout << type << " has been assigned." << std::endl;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << type << " has been destroyed." << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog barks." << std::endl;
}
