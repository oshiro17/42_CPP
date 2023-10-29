#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout <<"<WrongCat> Constructor called (" << this->type \
    <<")"<<std::endl;
}

WrongCat::WrongCat(const WrongCat&obj)
{
	*this = obj;
	std::cout << "<WrongCat> Copy Constructor called (" << this->type \
    <<")"<<std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "<WrongCat> Destructor called (" << this->type \
    <<")"<<std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
	    std::cout << "<WrongCat> Copy assignment operator called (" << this->type \
        <<")"<<std::endl;
    }
    return (*this);
}

void WrongCat::makeSound()const
{
	std::cout << "<WrongCat> Wrong Meow! Meow! (" << this->type \
    <<")"<<std::endl;
}