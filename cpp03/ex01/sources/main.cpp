#include "ScavTrap.hpp"

int main(void) {
    ScavTrap James("James");
	ScavTrap Lincoln("Lincoln");

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

    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	Lincoln.guardGate();

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

	return (0);
}