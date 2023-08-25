#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string ia;
	while (1)
	{
		std::cout << "Enter a Command : ";
		if(!(std::getline(std::cin, ia)))
		{
			exit(1);
			if (std::cin.eof())
			{
				std::cout << "Exiting the program." << std::endl;
				break;
			}
			else
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
		}
		std::cout << std::endl;
		if (ia == "SEARCH\0")
			book.search();
		else if(ia == "ADD\0")
			book.add();
		else if(ia == "EXIT\0")
		{
			std::cout << "good bye( ≖ଳ≖)ㄑƺねႫ~" << std::endl;
			break;
		}
		// std::cin.clear();
	}
	return(0);
}
