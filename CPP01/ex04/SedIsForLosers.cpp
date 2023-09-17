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
	size_t found = content.find(s1);
	while (found != std::string::npos)
	{
		content.replace(found, s1.length(), s2);
		found = content.find(s1, found + s2.length());
	}
	std::cout << content << std::endl;
	return;
}
