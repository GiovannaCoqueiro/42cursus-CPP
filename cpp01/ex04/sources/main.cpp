#include "SearchAndReplace.hpp"

int openFiles(std::string file, std::string s1, std::string s2) {
	std::ifstream infile(file.c_str(), infile.in);
	if (infile.fail() || infile.is_open() == false) {
		error("Couldn't open infile.");
		return (1);
	}

	std::ofstream outfile((file + ".replace").c_str(),outfile.out | outfile.trunc);
	if (outfile.fail() || outfile.is_open() == false) {
		error("Couldn't open outfile.");
        infile.close();
		return (1);
	}

	if (search(infile, outfile, s1, s2) == 1) {
		infile.close();
		outfile.close();
		return (1);
	}
	infile.close();
	outfile.close();
	return (0);
}

int main(int argc, char **argv){
	int status = 0;

	if (argc != 4) {
		error("Usage: ./replace <filename> <s1> <s2>");
		return (1);
	}
	if(std::string(argv[1]).size() < 1 || std::string(argv[2]).size() < 1 || std::string(argv[3]).size() < 1) {
		error("You left blank spaces.");
		return (1);
	}

	status = openFiles(argv[1], argv[2], argv[3]);
	return (status);
}