#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    _length = 0;
    _index = 0;
}

PhoneBook::~PhoneBook() {}

Contact PhoneBook::getContact(int index) const {
    return (_contacts[index]);
}

int PhoneBook::getLength() const {
    return (_length);
}

int PhoneBook::getIndex() const {
    return (_index);
}

void PhoneBook::setContact(Contact contact) {
    int index = getIndex();
    _contacts[index] = contact;
}

void PhoneBook::setLength(int length) {
    if (_length == 8)
        return ;
    else
        _length = length;
}

void PhoneBook::setIndex(int index) {
    if (_index == 8)
        _index = 0;
    else
        _index = index;
}

void PhoneBook::addContact() {
    std::string firstName = "", lastName = "", nickname = "", phone = "", darkestSecret = "";

    std::cout << "Enter First Name: ";
    std::cin >> firstName;
    std::cout << "Enter Last Name: ";
    std::cin >> lastName;
    std::cout << "Enter Nickname: ";
    std::cin >> nickname;
    std::cout << "Enter phone: ";
    std::cin >> phone;
    std::cout << "Enter Darkest Secret: ";
    std::cin >> darkestSecret;

    if (firstName.empty() || lastName.empty() || nickname.empty() || phone.empty() || darkestSecret.empty()) {
        std::cout << "You left blank spaces" << std::endl;
        return ;
    }

    Contact contact(firstName, lastName, nickname, phone, darkestSecret);
    setContact(contact);
    setLength(getLength() + 1);
    setIndex(getIndex() + 1);
}

// void PhoneBook::searchContact(PhoneBook phonebook) {

// }