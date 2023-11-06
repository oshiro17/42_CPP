#include <iostream>
#include <locale>

std::string str_toupper(std::string str)
{
	std::locale l = std::locale::classic();
	// std::cout<<l.name()<<"test\n";
	//Cロケール
	for(int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i], l);
	return (str);

}

int main(int argc, char **argv) {
	std::string str;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (size_t i = 1; argv[i]; i++)
		{
			str = argv[i];
			std::cout << str_toupper(argv[i]);
			// if (argc != 1 && argv[i + 1])
				// std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}