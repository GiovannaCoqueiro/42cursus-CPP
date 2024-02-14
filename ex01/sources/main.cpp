/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:26:09 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/02/11 17:32:30 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
    std::string prompt = "";
    PhoneBook phonebook = PhoneBook();

    while (true) {
        std::cout << "Enter command: ";
        std::cin >> prompt;
        std::cout << std::endl;
        if (prompt == "ADD")
            phonebook.addContact();
        else if (prompt == "SEARCH")
            phonebook.searchContact();
        else if (prompt == "EXIT")
            break;
        else
        std::cout << "Invalid command: " << prompt << std::endl;
    }
}