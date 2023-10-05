#include "../inc/ScavTrap.hpp"

int main()
{
    ClapTrap clapTrap("CL4P-TP");
    ScavTrap scavTrap("SC4V-TP");

	std::cout<<"------------------"<<std::endl;

    clapTrap.attack("Bandit");
    scavTrap.attack("Thief");
	std::cout<<"------------------"<<std::endl;

    scavTrap.guardGate();
	std::cout<<"------------------"<<std::endl;

    return 0;
}



