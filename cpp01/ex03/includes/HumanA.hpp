#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
    private:
        std::string _name;
        Weapon* _weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        std::string getName() const;
        void setName(std::string name);
        void setWeapon(Weapon& weapon);
        void attack();
};

#endif