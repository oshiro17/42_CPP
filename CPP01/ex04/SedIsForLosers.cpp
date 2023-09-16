#include "SedIsForLosers.hpp"

Sed::Sed(std::string filename)
{
	this->_inFile = filename;
	this->_outFile = this->_inFile + ".replace";
}

Sed::~Sed()
{
}

void	Sed::replace(std::string s1, std::string s2)
{
	std::ifstream   ifs(this->_inFile);
	std::string content;
	std::getline(ifs, content, '\0');
	// std::cout << content << std::endl;
}
