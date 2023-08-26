#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string ia;
	while (1)
	{
		std::cout << "Enter a Command : ";
		if (!(std::getline(std::cin, ia)))
			exit(1);
		if (std::cin.eof())
			exit(1);
		if (ia.compare("ADD") == 0)
			book.add();
		else if (ia.compare("SEARCH") ==0 )
			book.search();
		else if(ia.compare("EXIT") == 0)
		{
			std::cout << "good bye( ≖ଳ≖)ㄑƺねႫ~" << std::endl;
			break;
		}
		else
			std::cout<<"wrong input(ꐦ°᷄д°᷅)\n";
	}
	return(0);
}
