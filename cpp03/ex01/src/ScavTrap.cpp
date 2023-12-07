#include "../inc/ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "default constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " has been born" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "copy constructor of ScavTrap called" << std::endl;
}


ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "assignation operator of ScavTrap called" << std::endl;
	if (this == &obj)
        return *this;
	ClapTrap::operator=(obj);
	return *this;
}


ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " is dead" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is guarding the gate!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}
