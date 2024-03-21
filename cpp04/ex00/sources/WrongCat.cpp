#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    _type = "WrongCat";
    std::cout << "WrongCat has been constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs) {
    *this = rhs;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
	if(this != &rhs) {
		_type = rhs._type;
	}
	return (*this);
}