#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {
    private:
        Brain* _brain;

    public:
        Dog();
        Dog(const Dog& rhs);
        ~Dog();
        Dog& operator=(const Dog& rhs);
        
        Brain* getBrain() const;

        void makeSound() const;
};

#endif