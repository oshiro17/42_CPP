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
	std::ifstream	ifs(this->_inFile);
	std::string		content;
	std::string		result = "";

	if (ifs)
	{
		size_t	start = 0;
		size_t	found = 0;
		std::getline(ifs,content,'\0');
		std::cout<<content;
		found = content.find(s1);
		while (found != std::string::npos)
		{
			result = result + content.substr(start, found - start);
			result = result + s2;
			start = found + s1.length();
			found = content.find(s1, start);
		}
		result = result + content.substr(start);
	}
	std::cout << result << std::endl;
	return;
}
