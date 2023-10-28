#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout <<"<Dog> Constructor called (" << this->type \
    <<")"<<std::endl;
}

Dog::Dog(const Dog&obj)
{
	*this = obj;
	std::cout << "<Dog> Copy Constructor called (" << this->type \
    <<")"<<std::endl;
}
Dog::~Dog()
{
	std::cout << "<Dog> Destructor called (" << this->type \
    <<")"<<std::endl;
}
Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
	    std::cout << "Copy assignment operator of Dog called" << std::endl;
    }
    return (*this);
}

void Dog::makeSound()const
{
	std::cout << "Woof! Woof!" << std::endl;
}