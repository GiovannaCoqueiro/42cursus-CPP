/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:28:58 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/02/14 11:28:59 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            for (int j = 0; argv[i][j]; j++) {
                std::cout << (char) std::toupper(argv[i][j]);
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}