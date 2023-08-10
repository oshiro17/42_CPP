#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string ia;
    while(ia != "EXIT\0")
    {
        std::cout << "コマンドをにゅうりょくしてくだしゃい :";
		std::cin >> ia;
		std::cout<<"\n";
		if (ia == "SEARCH\0")
			book.search();
		else if(ia == "ADD\0")
			book.add();
		ia = "\0";
		std::cin.clear(); 
    }
	return(0);
}
