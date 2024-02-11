#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string darkestSecret) {
    _firstName = firstName;
    _lastName = lastName;
    _nickname = nickname;
    _phone = phone;
    _darkestSecret = darkestSecret;
    std::cout << "Contact created" << std::endl;
}

Contact::~Contact() {}

std::string Contact::getFirstName() const {
    return (_firstName);
}

std::string Contact::getLastName() const {
    return (_lastName);
}

std::string Contact::getNickname() const {
    return (_nickname);
}

std::string Contact::getPhone() const {
    return (_phone);
}

std::string Contact::getDarkestSecret() const {
    return (_darkestSecret);
}

void Contact::setFirstName(std::string firstName) {
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
    this->_nickname = nickname;
}

void Contact::setPhone(std::string phone) {
    this->_phone = phone;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->_darkestSecret = darkestSecret;
}