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
    _firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    _lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
    _nickname = nickname;
}

void Contact::setPhone(std::string phone) {
    _phone = phone;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    _darkestSecret = darkestSecret;
}

static void truncateInfo(std::string info) {
    int length = info.size();

    if (length > 10) {
        for (int i = 0; i < 10; i++) {
            if (i == 9) {
                std::cout << ".";
                return ;
            }
            std::cout << info[i];
        }
    } else {
        std::cout << std::right;
        for (int i = 0; i < 10 - length; i++)
            std::cout << " ";
        std::cout << info;
    }
}

void Contact::showPreInfo() {
    std::cout << "|";
    truncateInfo(_firstName);
    std::cout << "|";
    truncateInfo(_lastName);
    std::cout << "|";
    truncateInfo(_nickname);
    std::cout << "|" << std::endl;
}

void Contact::displayInfo() {
    std::cout << "First name: " << _firstName << std::endl;
    std::cout << "Last name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone: " << _phone << std::endl;
    std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}