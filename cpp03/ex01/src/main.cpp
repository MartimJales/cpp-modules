#include "../inc/ScavTrap.hpp"

int main()
{
    ClapTrap clapTrap("CL4P-TP");
    ScavTrap scavTrap("SC4V-TP");

    clapTrap.attack("Bandit");
    scavTrap.attack("Thief");

    scavTrap.guardGate();

    return 0;
}



