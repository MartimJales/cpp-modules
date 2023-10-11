#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main()
{
    const int numAnimals = 10;
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

    for (int i = 0; i < numAnimals; ++i)
    {
        delete animals[i];
    }

    Dog dog;
    dog.makeSound();

    Cat cat;
    cat.makeSound();

    //AAnimal test;

    return 0;
}

