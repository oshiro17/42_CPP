#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <sstream> 

class	Contact
{
	private:
	std::string	_firstName;
	int			_index;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	std::string _inputContact(std::string str);
	void	_putTenStr(size_t t_len,std::string str);

	public:
	void setContact(int index);//addの時
	void putContact();
	void putContactInfo();
	Contact();
	~Contact();
	// init_con(void);
};
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
