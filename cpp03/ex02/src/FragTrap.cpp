#include "../inc/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "default constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " is alive" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "copy constructor of FragTrap called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	ClapTrap::operator=(obj);
	std::cout << "assignation operator of FragTrap called" << std::endl;
	return (*this);
}


FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " is dead" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "I order you to give me the best High Five that you have or you will suffer :()" << std::endl;
}
