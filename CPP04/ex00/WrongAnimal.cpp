#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("hogemaru")
{
   std::cout << "Constructor of Aniaml called(" <<this->type \
    <<")"<< std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    *this = obj;
    std::cout << "Copy constructor of WrongAnimal called(" <<this->type \
    <<")"<< std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
	    std::cout << "Copy assignment operator of WrongAnimal called(" <<this->type \
    <<")"<< std::endl;
    }
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "<WrongAnimal> Destructor called (" << this->type \
    <<")"<<std::endl;
}
void WrongAnimal::makeSound() const 
{
    std::cout << "<WrongAnimal> Some generic WrongAnimal sound (" <<this->type \
    <<")"<< std::endl;
}

const std::string& WrongAnimal::getType() const 
{
    return type;
}