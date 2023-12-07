#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main() {
	// Concrete Brain Test
    Dog basic;
	std::cout << std::endl;
    {
        Dog tmp = basic;
		std::cout << std::endl;
    }
	std::cout << std::endl;
    basic.makeSound();
	std::cout << std::endl;

	// Destruction chaining
	Animal* animal = new Dog();
	std::cout << std::endl;
    delete animal;
	std::cout << std::endl;


	// Personal Test
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }
	std::cout << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }
	std::cout << std::endl;
    return 0;
}

