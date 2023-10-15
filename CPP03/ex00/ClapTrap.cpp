#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	if (name.empty())
		this->_name = "NO_NAME_HOGE";
	else
		this->_name = name;
	this->_hitPoint = 10;
	this-> _energyPoint = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	*this = obj;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	this->_name = obj._name;
	this->_hitPoint = obj._hitPoint;
	this->_energyPoint =obj._energyPoint;
	this->_energyPoint = obj._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoint == 0 || this->_energyPoint == 0)
	{
		std::cout<<this->_name<<" is died!"<<std::endl;
		return;
	}
	this->_energyPoint += -1;
	std::cout<<"ClapTrap " <<this->_name<< " attacks " << target;
	std::cout<<" causing " <<this->_attackDamage<<" points of damage!"<<std::endl;	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0 || this->_energyPoint == 0)
	{
		std::cout<<this->_name<<" is died!"<<std::endl;
		return;
	}
	if (amount >= this->_hitPoint)
	{	
		this->_hitPoint = 0;
		std::cout<<"ClapTrap "<< this->_name <<" is died!"<<std::endl;
		return;
	}
	this->_hitPoint = this->_hitPoint - amount;
	std::cout<<"ClapTrap "<< this->_name <<" take damage and loses "<<amount<<" hit points!" << std::endl;	

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == 0 || this->_energyPoint == 0)
	{
		std::cout<<this->_name<<" is died!"<<std::endl;
		return;
	}
	this->_hitPoint +=	amount;
	std::cout << "ClapTrap " << this->_name<< " is repaired and gets " << amount<< " hit points!" << std::endl;
}

void ClapTrap::showStatus()
{
	std::cout<<this->_name<<" status" << std::endl;
	std::cout<<"hitPoint:"<<this->_hitPoint<<std::endl;
	std::cout<<"energyPoint:"<<this->_energyPoint<<std::endl;
	std::cout<<"attackDamage:"<<this->_attackDamage<<std::endl;
}