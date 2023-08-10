#include <iostream>
// using namespace std;

std::string ToupperStr(char *str){
	for (size_t i = 0; str[i];i++)
	{
		str[i]=toupper(str[i]);
	}
	return(str);
}

int main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (size_t i = 1; argv[i]; i++)
		{
			std::cout << ToupperStr(argv[i]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}