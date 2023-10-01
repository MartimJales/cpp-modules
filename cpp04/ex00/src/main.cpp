#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal *alien = new WrongAnimal();
	const WrongAnimal *alienCat = new WrongCat();

	std::cout << "\nGeneric Animal:" <<
	"\n    Type: " << animal->getType() <<
	"\n    Sound: "; animal->makeSound();

	std::cout << "\nDog:" <<
	"\n    Type: " << dog->getType() <<
	"\n    Sound: "; dog->makeSound();

	std::cout << "\nCat:" <<
	"\n    Type: " << cat->getType() <<
	"\n    Sound: "; cat->makeSound();

	std::cout << "\nWrong Animal:" <<
	"\n    Type: " << alien->getType() <<
	"\n    Sound: "; alien->makeSound();

	std::cout << "\nWrong Cat:" <<
	"\n    Type: " << alienCat->getType() <<
	"\n    Sound: "; alienCat->makeSound();

	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;
	delete alien;
	delete alienCat;
	return 0;
}
