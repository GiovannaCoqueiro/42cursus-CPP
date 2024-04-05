/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SearchAndReplace.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:38:34 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 11:38:35 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS_HPP
#define LIBS_HPP

#include <iostream>
#include <fstream>

void replace(std::string& line, std::string s1, std::string s2);
int search(std::ifstream& infile, std::ofstream& outfile, std::string s1, std::string s2);
void error(std::string err);

#endif