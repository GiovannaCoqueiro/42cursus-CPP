#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    _index = 0;
}

PhoneBook::~PhoneBook() {}

Contact PhoneBook::getContact(int index) const {
    return (_contacts[index]);
}

int PhoneBook::getIndex() const {
    return (_index);
}

void PhoneBook::setContact(Contact contact) {
    int index = getIndex();
    _contacts[index] = contact;
}

void PhoneBook::setIndex(int index) {
    if (_index == 7)
        _index = 0;
    else
        _index++;
}