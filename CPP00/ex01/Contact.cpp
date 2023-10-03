#include	"Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::_putTenStr(size_t t_len, std::string str)
{
	std::string value;
	size_t sp;

	if (str.length() > 10)
	{
		value = str.substr(0,9) + ".";
		sp = t_len - 10;
	}
	else
	{
		value = str;
		sp = t_len - value.length();
	}
	while (sp--)
		value = " " + value;
	std::cout<<value<<"|";
}

void	Contact::putContact(void)
{
	std::cout<<"|   "<<this->_index<<"   |";
	this->_putTenStr(12, this->_firstName);
	this->_putTenStr(12, this->_lastName);
	this->_putTenStr(10, this->_nickname);
	this->_putTenStr(14, this->_phoneNumber);
	this->_putTenStr(18, this->_darkestSecret);
	std::cout<<"\n";
	std::cout << "---------------------------------------------------------------------------------\n";

}

std::string Contact::_inputContact(std::string str)
{
	std::string ia;
	while (1)
	{
		std::cout<<str;
		if(!(std::getline(std::cin,ia)))
			exit(1);
		if (ia != "")
			break;
	}
	std::cout<<"\n";
	return(ia);
}

void	Contact::putContactInfo(void)
{
	std::cout<<"index : "<<this->_index<<"\n";
	std::cout<<"first name : "<<this->_firstName<<"\n";
	std::cout<<"last name : "<<this->_lastName<<"\n";
	std::cout<<"nickname : "<<this->_nickname<<"\n";
	std::cout<<"phoneNumber : "<<this->_phoneNumber<<"\n";
	std::cout<<"darkestSecret : "<<this->_darkestSecret<<"\n";
	std::cout<<"\n";
}

void	Contact::setContact(int index)
{	
	this->_index = index + 1;
	this->_firstName = this->_inputContact("1 first name : ");
	this->_lastName = this->_inputContact("2 last name : ");
	this->_nickname = this->_inputContact("3 nickname : ");
	this->_phoneNumber = this->_inputContact("4 phone number : ");
	this->_darkestSecret = this->_inputContact("5 darkest secret : ");
	std::cin.clear(); 
}