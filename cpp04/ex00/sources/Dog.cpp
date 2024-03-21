#include "Dog.hpp"

Dog::Dog() : Animal() {
	setType("Dog");
    std::cout << "Dog has been constructed." << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs) {
    *this = rhs;
}

Dog::~Dog() {
    std::cout << "Dog destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	if(this != &rhs) {
		_type = rhs._type;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Au Au" << std::endl;
}