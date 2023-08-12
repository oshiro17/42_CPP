#include	"PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	this->_c_num = 0;
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "ｷｬ━━━━(ﾟ∀ﾟ)━━━━!! ｷｬ━━(❁´ω`❁) ✧٩(ˊωˋ*)و✧و✧و✧\n";;
	std::cout << "(˘ω˘)✩クソネミ(˘ωω˘)✩☆.。.:*(嬉´Д`嬉).。.:*☆\n";;
	std::cout << "------------------------------------------\n";
	std::cout << "❤︎PhoneBook❤︎\n";
	std::cout << "------------------------------------------\n";
	std::cout << "           ADD SEARCH EXIT\n";
	std::cout << "------------------------------------------\n";
	std::cout << " ﾟДﾟ)㌦ｧ!!　<(｀^´)>ｷｬ━━━━(ﾟ∀ﾟ)━━━━!!ヽ(`Д´)ﾉ\n";
	std::cout << "# ﾟДﾟ)·;’. ｺﾞﾙｧ!!!ｷｬ━━━━(ﾟ∀ﾟ)━━━━!!ヽ(`Д´)ﾉ\n";
	std::cout << "\n";
}
PhoneBook::~PhoneBook(/* args */)
{
}

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
		sp = (t_len - 10) / 2;
	}
	else
	{
		value = str;
		sp = (t_len - value.length()) / 2;
	}
	while (sp--)
		value = " " + value + " ";
	if (str.length() <= 10 && str.length() % 2)
		value = value + " ";
	std::cout<<value<<"|";
}

void	Contact::putContact(void)
{
	std::cout<<"|   "<<this->_index<<"   |";
	this->_putTenStr(12, this->_firstName);
	this->_putTenStr(12, this->_lastName);
	this->_putTenStr(10, this->_nickname);
	this->_putTenStr(10, this->_phoneNumber);
	this->_putTenStr(14, this->_darkestSecret);
	std::cout<<"\n";
	std::cout << "------------------------------------------------------------------------------\n";

}

std::string Contact::_inputContact(std::string str)
{
	std::string ia;
	std::cout<<str;
	std::cin >> ia;
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
	this->_lastName = this->_inputContact("2 last name :");
	this->_nickname = this->_inputContact("3 nickname :");
	this->_phoneNumber = this->_inputContact("4 phone number :");
	this->_darkestSecret = this->_inputContact("5 darkest secret :");
	std::cin.clear(); 
}
void	PhoneBook::add()
{
	if (this->_c_num >= 8)
	{
		std::cout<<"Phonebook is FULL（ > <）\n";
		return;
	}
	this->_contact[this->_c_num].setContact(this->_c_num);

	this->_c_num++;
}	
void	PhoneBook::search()
{
	int i = 0;
	int index = 0;
	if (this->_c_num == 0)
	{
		std::cout<<"The Phone Book is empty\n\n";
		return ;
	}
	else
	{
		std::cout << "\n------------------------------------------------------------------------------\n";
		std::cout << "| index | first name | last  name | nickname | phone number | darkest sercret |\n";
		std::cout << "\n------------------------------------------------------------------------------\n";
		while (i < this->_c_num)
		{
			this->_contact[i].putContact();
			i++;
		}
	}
	std::cout << "\nSelect the index : " ;
	std::cin >> index;
	std::cout<<"\n";
	if (index > 8 || index <= 0 ||index > this->_c_num)
		std::cout<<"wrong input(ꐦ°᷄д°᷅)\n";
	else
		this->_contact[index - 1].putContactInfo();
	return;
}
