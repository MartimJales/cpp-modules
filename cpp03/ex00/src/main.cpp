#include "../inc/ClapTrap.hpp"

int	main() {
	ClapTrap jales("CLAP-TP");
	ClapTrap diogo("CLAP-42");

	jales.setAttackDamage(3);
	diogo.setAttackDamage(4);

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



