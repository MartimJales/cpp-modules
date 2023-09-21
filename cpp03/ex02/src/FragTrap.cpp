#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::~FragTrap() {}

void FragTrap::highFivesGuys(void){
	std::cout << "I order you to give me the best High Five that you have or you will suffer :()" << std::endl;
}
