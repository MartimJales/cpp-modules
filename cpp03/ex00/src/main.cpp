#include "../inc/ClapTrap.hpp"

// int main( void ) {
// 	ClapTrap a("default");
// 	ClapTrap b( a );
// 	ClapTrap c = a;

// 	ClapTrap teste("teste");

// 	std::cout << a.getName() << " has " << a.getHP() << " Hp" << std::endl;
// 	a.attack(teste.getName());
// 	a.beRepaired(1);
// 	a.takeDamage(50);
// 	a.beRepaired(10); // cant be repaired bcs it took to much dmg
// 	std::cout << a.getName() << " has " << a.getHP() << " Hp" << std::endl;
// 	return 0;
// }

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



