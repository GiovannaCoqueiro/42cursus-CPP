#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& rhs);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& rhs);
        
        std::string getType() const;
        void setType(std::string type);

        void makeSound() const;
};

#endif