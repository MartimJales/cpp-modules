#include <iostream>
#include <vector>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int numAnimals = 10;
    std::vector<Animal*> animals;

    for (int i = 0; i < numAnimals; ++i)
    {
        if (i < numAnimals / 2)
        {
            animals.push_back(new Dog());
        }
        else
        {
            animals.push_back(new Cat());
        }
    }

    for (int i = 0; i < numAnimals; ++i)
    {
        delete animals[i];
    }

	Dog basic;
	{
		Dog tmp = basic;
	}

	basic.makeSound();
    return 0;
}
