#include "../inc/FragTrap.hpp"

int main()
{
	FragTrap fragTrap("FR4G-TP");
	std::cout<<"------------------"<<std::endl;
	fragTrap.attack("Enemy");
	std::cout<<"------------------"<<std::endl;
	fragTrap.highFivesGuys();
	std::cout<<"------------------"<<std::endl;
	return 0;
}



