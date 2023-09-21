#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap() {}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is guarding the gate!" << std::endl;
}
