#include "Cat.hpp"

Cat::Cat() : AAnimal() {
    setType("Cat");
	_brain = new Brain();
    std::cout << "Cat has been constructed." << std::endl;
}

Cat::Cat(const Cat& rhs) : AAnimal(rhs) {
	_brain = new Brain();
    *this = rhs;
}

Cat::~Cat() {
	delete _brain;
    std::cout << "Cat destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
	if(this != &rhs) {
		_type = rhs._type;
		*_brain = *(rhs._brain);
	}
	return (*this);
}

Brain* Cat::getBrain() const {
	return (_brain);
}

void Cat::makeSound() const {
	std::cout << "Miau Miau" << std::endl;
}