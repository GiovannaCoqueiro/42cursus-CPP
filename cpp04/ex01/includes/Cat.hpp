#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    private:
        Brain* _brain;

    public:
        Cat();
        Cat(const Cat& rhs);
        ~Cat();
        Cat& operator=(const Cat& rhs);
        
        Brain* getBrain() const;

        void makeSound() const;
};

#endif