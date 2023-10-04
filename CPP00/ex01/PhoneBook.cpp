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

void	PhoneBook::add()
{
	int index = 0;
	index = this->_c_num;
	if (this->_c_num >= 8)
	{
		std::cout<<"Phonebook is FULL（ > <）\n";
		index = _c_num % 8;
	}
	this->_contact[index].setContact(this->_c_num);

	this->_c_num++;
}	
void	PhoneBook::search()
{
	int			i = 0;
	std::string	input;
	int			index = 0;
	if (this->_c_num == 0)
	{
		std::cout<<"The Phone Book is empty\n\n";
		return ;
	}
	else
	{
		std::cout << "\n--------------------------------------------------------------------------------\n";
		std::cout << "| index | first name | last  name | nickname | phone number | darkest  sercret |\n";
		std::cout << "---------------------------------------------------------------------------------\n";
		while (i < 8 && (i < this->_c_num))
		{
			this->_contact[i].putContact();
			i++;
		}
	}
	std::cout << "\nSelect the index : " ;
	if(!(std::getline(std::cin, input)))
		exit(1);
	std::cout<<"\n";
	// 数字以外の値が入力された場合の処理
    std::istringstream iss(input);
    if (!(iss >> index) || iss.peek() != EOF ||index > 8 || index <= 0 || index > this->_c_num)
        std::cout << "wrong input. Please enter a valid index.\n";
	else
		this->_contact[index - 1].putContactInfo();
	std::cin.clear();
	return;
}
