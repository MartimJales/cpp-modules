#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	std::cout << "Animal INFO:" <<
	"\n    Type: " << animal->getType() <<
	"\n    Sound: "; animal->makeSound();
	std::cout << std::endl;

	const Animal* dog = new Dog();
	std::cout << "Dog INFO:" <<
	"\n    Type: " << dog->getType() <<
	"\n    Sound: "; dog->makeSound();
	std::cout << std::endl;

	const Animal* cat = new Cat();
	std::cout << "Cat INFO:" <<
	"\n    Type: " << cat->getType() <<
	"\n    Sound: "; cat->makeSound();
	std::cout << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal *alien = new WrongAnimal();
	const WrongAnimal *alienCat = new WrongCat();

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
	delete meta;
	delete j;
	delete i;
	return 0;
}
