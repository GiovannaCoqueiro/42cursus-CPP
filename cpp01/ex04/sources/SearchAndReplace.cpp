#include "SearchAndReplace.hpp"

void error(std::string err) {
    std::cout << "ERROR" << std::endl << err << std::endl;
}

void replace(std::string& line, std::string s1, std::string s2) {
	size_t i = 0;
	size_t found = 0;

	while (true) {
		found = line.find(s1, i);
		if (found == std::string::npos)
			break;
		line.erase(found, s1.size());
		line.insert(found, s2);
		i = found + s2.size();
	}
}

int search(std::ifstream& infile, std::ofstream& outfile, std::string s1, std::string s2) {
	while(infile.eof() == false){
		std::string line;
		std::getline(infile, line);
		if (infile.eof() == false && infile.fail()) {
			error("Couldn't read from infile");
			infile.close();
			outfile.close();
			return (1);
		}

		replace(line, s1, s2);
		if (infile.eof() == false)
			outfile << line << std::endl;
		else
			outfile << line;

		if (outfile.fail()) {
			error("Couldn't write on outfile.");
			infile.close();
			outfile.close();
			return (1);
		}
	}
	return (0);
}