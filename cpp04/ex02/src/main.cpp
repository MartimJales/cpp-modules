#include <iostream>
#include <vector>
#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main()
{
    const int numAnimals = 10;
    std::vector<AAnimal*> animals;

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
    return 0;

	//AAnimal tesst;
}
