#include "PhoneBook.hpp"

void addContacts(PhoneBook *phonebook)
{
    int i = PhoneBook::phonebook.getIndex();
}

int main(void) {
    std::string prompt = "";
    PhoneBook phonebook = PhoneBook();

    while (true) {
        std::cout << "Enter command: ";
        std::cin >> prompt;
        if (prompt == "ADD")
            addContact(&phonebook);
        else if (prompt == "SEARCH")
            searchContact(phonebook);
        else if (prompt == "EXIT")
            break;
        else
        std::cout << "Invalid command: " << prompt << std::endl;
    }
}