#include "Animal.hpp"

Animal::Animal() {
    _type = "Animal";
    std::cout << "Animal has been constructed." << std::endl;
}

Animal::Animal(const Animal& rhs) {
    *this = rhs;
}

Animal::~Animal() {
    std::cout << "Animal destroyed." << std::endl;
}

Animal& Animal::operator=(const Animal& rhs) {
	if(this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string Animal::getType() const {
    return (_type);
}

void Animal::setType(std::string type) {
    _type = type;
}

void Animal::makeSound() const {
	std::cout << "* " << _type << " makes a sound *" << std::endl;
}