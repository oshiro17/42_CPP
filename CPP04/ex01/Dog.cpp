#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->_brain = new Brain();
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
	    std::cout <<"<Dog> Copy assignment operator of Dog called(" << this->type \
    <<")"<<std::endl;
        *this->_brain = *obj._brain;
    }
    return (*this);
}

void Dog::makeSound()const
{
	std::cout <<"<Dog> Woof! Woof!(" << this->type \
    <<")"<<std::endl;
}