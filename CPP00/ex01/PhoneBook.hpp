#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <sstream> 
#include "Contact.hpp"

class	PhoneBook
{
	private:
	Contact _contact[8];
	int	_c_num;

	public:
	PhoneBook();
	~PhoneBook();
	void add(void);
	void search(void);
};

#endif
