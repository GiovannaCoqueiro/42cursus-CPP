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
    this->_contacts[getIndex()] = contact;
}

void PhoneBook::setLength(int length) {
    if (_length == 8)
        return ;
    else
        this->_length = length;
}

void PhoneBook::setIndex(int index) {
    if (index == 8)
        this->_index = 0;
    else
        this->_index = index;
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
    std::cout << "instacia" << std::endl;
    std::cout << getIndex() << std::endl;
    std::cout << getLength() << std::endl;
    setContact(contact);
    setLength(getLength() + 1);
    setIndex(getIndex() + 1);
    std::cout << getIndex() << std::endl;
    std::cout << getLength() << std::endl;
}

static int ctoi(char digit) {
    return (digit - '0');
}

void PhoneBook::searchContact() {
    char digit;
    int index;

    for (int i = 0; i < getLength(); i++) {
        std::cout << i << " ";
        _contacts[i].showPreInfo();
        std::cout << std::endl;
    }

    std::cout << "Enter the index of a contact to show more info: ";
    std::cin >> digit;

    if (!isdigit(digit)) {
        std::cout << "Not a digit" << std::endl;
        return ;
    }

    index = ctoi(digit);
    if (index >= getLength()) {
        std::cout << "Out of range" << std::endl;
        return ;
    }
    _contacts[index].displayInfo();
}