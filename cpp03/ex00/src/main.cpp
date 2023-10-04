#include "../inc/ClapTrap.hpp"

int	main() {
	ClapTrap jales("jales");
	ClapTrap diogo("diogo");

	jales.setAttackDamage(3);
	diogo.setAttackDamage(4);



	// std::cout << jales << std::endl;
	// std::cout << diogo << std::endl;

	diogo.attack(jales.getName());
	jales.takeDamage(diogo.getAttackDamage());

	diogo.attack(jales.getName());
	jales.takeDamage(diogo.getAttackDamage());

	diogo.attack(jales.getName());
	jales.takeDamage(diogo.getAttackDamage());

	jales.beRepaired(5);

	jales.attack(diogo.getName());
	diogo.takeDamage(jales.getAttackDamage());

	jales.attack(diogo.getName());
	diogo.takeDamage(jales.getAttackDamage());

	jales.attack(diogo.getName());
	diogo.takeDamage(jales.getAttackDamage());

	jales.attack(diogo.getName());
	diogo.takeDamage(jales.getAttackDamage());

	return 0;
}



