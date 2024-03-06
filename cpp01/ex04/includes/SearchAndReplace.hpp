#ifndef LIBS_HPP
#define LIBS_HPP

#include <iostream>
#include <fstream>

void replace(std::string& line, std::string s1, std::string s2);
int search(std::ifstream& infile, std::ofstream& outfile, std::string s1, std::string s2);
void error(std::string err);

#endif