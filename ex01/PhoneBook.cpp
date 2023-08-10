#include	"PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	this->_c_num = 0;
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "ｷｬ━━━━(ﾟ∀ﾟ)━━━━!! ｷｬ━━(❁´ω`❁) ✧٩(ˊωˋ*)و✧و✧و✧\n";;
	std::cout << "(˘ω˘)✩クソネミ(˘ωω˘)✩☆.。.:*(嬉´Д`嬉).。.:*☆\n";;
	std::cout << "------------------------------------------\n";
	std::cout << "❤︎連絡帳管理ページへようこそ❤︎\n";
	std::cout << "------------------------------------------\n";
	std::cout << "           ADD: 新規登録\n";
	std::cout << "             SEARCH: 検索\n";
	std::cout << "         EXIT: 連絡帳を閉じる\n";
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
		value = str.substr(0,9) + ".";
	else
		value = str;
	sp = (t_len - value.length()) / 2;
	while (sp--)
		value = " " + value + " ";
	if (str.length() % 2)
		value = value + " ";
	std::cout<<value<<"|";
}

void	Contact::putContact(void)
{
	std::cout<<"|   "<<this->_index<<"   |";
	this->_putTenStr(12,this->_firstName);
	std::cout<<"\n";
	std::cout << "----------------------\n";
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
	std::cout<<"\n";
}

void	Contact::setContact(int index)
{	
	this->_index = index + 1;
	this->_firstName = this->_inputContact("おなまえおしえろ : ");
	// this->_lastName = this->_inputContact("名字を教えろ");
	
	// std::cout<< this->_firstName;
}
void	PhoneBook::add()
{
	if (this->_c_num >= 8)
	{
		std::cout<<"Phone Book ｲｽﾞFULL（ > <）\n";
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
		std::cout<<"まだ誰も登録されていません\n\n";
		return ;
	}
	else
	{
		std::cout << "\n----------------------\n";
		std::cout << "| index | first name |\n";
		std::cout << "----------------------\n";
		while (i < this->_c_num)
		{
			this->_contact[i].putContact();
			i++;
		}
	}
	std::cout << "\nインデックスを選択してください : " ;
	std::cin >> index;
	std::cout<<"\n";
	if (index > 8 || index <= 0 ||index > this->_c_num)
		std::cout<<"不適切(ꐦ°᷄д°᷅)\n";
	else
		this->_contact[index - 1].putContactInfo();
	return;
}
