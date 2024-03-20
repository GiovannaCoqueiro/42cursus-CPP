#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap James("James");
	FragTrap Lincoln("Lincoln");

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

    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	Lincoln.highFivesGuys();

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

	return (0);
}