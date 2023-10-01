#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " is alive" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " is dead" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "I order you to give me the best High Five that you have or you will suffer :()" << std::endl;
}
