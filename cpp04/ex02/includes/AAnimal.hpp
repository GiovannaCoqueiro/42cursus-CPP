#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal {
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(const AAnimal& rhs);
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal& rhs);
        
        std::string getType() const;
        void setType(std::string type);

        virtual void makeSound() const = 0;
        virtual Brain* getBrain() const = 0;
};

#endif