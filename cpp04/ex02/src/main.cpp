#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main()
{
    // AAnimal* j = new AAnimal();


    const int numAnimals = 4;
    AAnimal* animals[numAnimals];

    for (int i = 0; i < numAnimals; ++i)
    {
        if (i < numAnimals / 2)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < numAnimals; ++i)
    {
        delete animals[i];
    }
    std::cout << std::endl;

    Dog dog;
    dog.makeSound();
    std::cout << std::endl;

    Cat cat;
    cat.makeSound();
    std::cout << std::endl;

    // AAnimal test;
    return 0;
}

