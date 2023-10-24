#include "AnimalTrap,hpp"
Animal::Animal() : type("hogemaru")
{
   std::cout << "Constructor of Aniaml called" << std::endl;
}

Aniaml::Animal(const Animal& obj)
{
    *this = obj;
    std::cout << "Copy constructor of Animal called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    this->type = this->type;
	std::cout << "Copy assignment operator of Animal called" << std::endl;
    return (*this);
}