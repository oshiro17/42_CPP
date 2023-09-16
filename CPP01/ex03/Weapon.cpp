#include "Weapon.hpp"

Weapon::Weapon(std::string	type)
{
	this->setType(type);
}
void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}

std::string &Weapon::getType()
{
	return this->_type;
}

Weapon::~Weapon()
{
}