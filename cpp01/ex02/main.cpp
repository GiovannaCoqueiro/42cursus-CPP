/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:15:08 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/02/14 16:19:39 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
    std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "ADRESSES:" << std::endl;
	std::cout << "var: " << &string << std::endl;
	std::cout << "ptr: " << stringPTR << std::endl;
	std::cout << "ref: " << &stringREF << std::endl << std::endl;
	
	std::cout << "VALUES:" << std::endl;
	std::cout << "var: " << string << std::endl;
	std::cout << "ptr: " << *stringPTR << std::endl;
	std::cout << "ref: " << stringREF << std::endl;
}