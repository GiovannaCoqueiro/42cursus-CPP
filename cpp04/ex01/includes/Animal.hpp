#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal& rhs);
        virtual ~Animal();
        Animal& operator=(const Animal& rhs);
        
        std::string getType() const;
        void setType(std::string type);

        virtual void makeSound() const;
        virtual Brain* getBrain() const = 0;
};

#endif