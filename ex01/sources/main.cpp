#include "PhoneBook.hpp"

int main(void) {
    std::string prompt = "";
    PhoneBook phonebook = PhoneBook();

    while (true) {
        std::cout << "Enter command: ";
        std::cin >> prompt;
        if (prompt == "ADD")
            phonebook.addContact();
        // else if (prompt == "SEARCH")
        //     phonebook.searchContact(phonebook);
        else if (prompt == "EXIT")
            break;
        else
        std::cout << "Invalid command: " << prompt << std::endl;
    }
}