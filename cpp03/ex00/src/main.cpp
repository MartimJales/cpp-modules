#include "../inc/ClapTrap.hpp"

int	main() {
	ClapTrap goodClap("CLAP-BATMAN");
	ClapTrap badClap("CLAP-JOKER");

	goodClap.setAttackDamage(3);
	badClap.setAttackDamage(1);

	badClap.attack(goodClap.getName());
	goodClap.takeDamage(badClap.getAttackDamage());

	badClap.attack(goodClap.getName());
	goodClap.takeDamage(badClap.getAttackDamage());

	badClap.attack(goodClap.getName());
	goodClap.takeDamage(badClap.getAttackDamage());

	goodClap.beRepaired(5);

	goodClap.attack(badClap.getName());
	badClap.takeDamage(goodClap.getAttackDamage());

	goodClap.attack(badClap.getName());
	badClap.takeDamage(goodClap.getAttackDamage());

	goodClap.attack(badClap.getName());
	badClap.takeDamage(goodClap.getAttackDamage());

	goodClap.attack(badClap.getName());
	badClap.takeDamage(goodClap.getAttackDamage());

	return 0;
}



