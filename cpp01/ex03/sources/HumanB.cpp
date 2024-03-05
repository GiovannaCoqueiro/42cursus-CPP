#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB() {}

std::string HumanB::getName() const {
    return (_name);
}

void HumanB::setName(std::string name) {
    this->_name = name;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack() {
    std::cout << getName() << " attacks with " << _weapon->getType() << std::endl; 
}