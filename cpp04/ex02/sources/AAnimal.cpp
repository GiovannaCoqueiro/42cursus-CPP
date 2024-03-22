#include "AAnimal.hpp"

AAnimal::AAnimal() {
    _type = "AAnimal";
    std::cout << "AAnimal has been constructed." << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs) {
    *this = rhs;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destroyed." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs) {
	if(this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string AAnimal::getType() const {
    return (_type);
}

void AAnimal::setType(std::string type) {
    _type = type;
}