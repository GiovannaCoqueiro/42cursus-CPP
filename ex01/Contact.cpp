#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string name, std::string phone) {
    _name = name;
    _phone = phone;
    std::cout << "Contact created" << std::endl;
}

Contact::~Contact() {}

std::string Contact::getName() const {
    return (_name);
}

std::string Contact::getPhone() const{
    return (_phone);
}

void Contact::setName(std::string name) {
    this->_name = name;
}

void Contact::setPhone(std::string phone) {
    this->_phone = phone;
}