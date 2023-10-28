#include "Animal.hpp"
Animal::Animal() : type("hogemaru")
{
   std::cout << "Constructor of Aniaml called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
    std::cout << "Copy constructor of Animal called" << std::endl;
}
Animal::~Animal()
{

	std::cout << "<Animal> Destructor called (" << this->type \
    <<")"<<std::endl;
}


Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
	    std::cout << "Copy assignment operator of Animal called" << std::endl;
    }
    return (*this);
}

void Animal::makeSound() const 
{
    std::cout << "Some generic animal sound" << std::endl;
}

const std::string& Animal::getType() const 
{
    return type;
}