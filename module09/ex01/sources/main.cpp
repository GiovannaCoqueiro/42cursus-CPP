/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:46 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:47 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	RPN rpn;
	ssize_t result = rpn.calculate(argv[1]);
	if (result == -1)
		return 1;

	std::cout << result << std::endl;
	return 0;
}