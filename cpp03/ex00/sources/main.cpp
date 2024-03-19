#include "ClapTrap.hpp"

int main(void) {
    ClapTrap James("James");
	ClapTrap Lincoln("Lincoln");

    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());

    Lincoln.setAttackDamage(1);

    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
    Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
    Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	
    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	James.beRepaired(1);

    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	Lincoln.attack(James.getName());

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

	return (0);
}