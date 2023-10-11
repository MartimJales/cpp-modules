#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj){
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	std::cout << "copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	std::cout << "copy assingment constructor called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << _name << " attacked " << target << " causing " << target <<" to lose "\
<< _attackDamage << " Hp" << std::endl;
		_energyPoints -= 1;
	}
	else if (_hitPoints <= 0)
	{
		std::cout << _name << " is dead, therefore, he cannot attack" << std::endl;
	}
	else
		std::cout << _name << " has 0 energy points left, therefore, he cannot attack" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints <= 0)
	{
		std::cout << "Do you calm joe! " << _name << " is already dead" << std::endl;
	}
	else if (amount >= _hitPoints)
	{
		std::cout << _name << " lost " << _hitPoints << " HP and died" << std::endl;
		_hitPoints = 0;
	}
	else
	{
		std::cout << _name << " lost " << amount << " HP" << std::endl;
		_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << _name << " repaired " << amount << " HP" << std::endl;
		_hitPoints += amount;
		_energyPoints -= 1;
	}
	else if (_hitPoints <= 0)
		std::cout << _name <<  " is already dead, therefore, he cannot be repaired" << std::endl;
	else
		std::cout << _name << " has no energy points left, therefore, he cannot be repaired" << std::endl;
}

std::string& ClapTrap::getName(){
	return this->_name;
}

int ClapTrap::getHP(){
	return _hitPoints;
}

int ClapTrap::getEnergyPoints()
{
	return _energyPoints;
}

int ClapTrap::getAttackDamage()
{
	return _attackDamage;
}

void ClapTrap::setName(std::string Name)
{
	_name = Name;
}

void ClapTrap::setHitPoints(int hitPoints){
	_hitPoints = hitPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints){
	_energyPoints = energyPoints;
}
void ClapTrap::setAttackDamage(int attackDamage){
	_attackDamage = attackDamage;
}
