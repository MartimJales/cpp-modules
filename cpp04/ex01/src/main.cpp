#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int numAnimals = 10;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    Dog basic;
    {
        Dog tmp = basic;
    }

    basic.makeSound();
    return 0;
}

