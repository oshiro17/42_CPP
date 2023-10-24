#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(),FragTrap(),ScavTrap()
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	std::cout << this->_name <<" Constructor of DiamondTrap called"<<std::endl;
	this->_attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name <<" : Destroying the DiamondTrap " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj),FragTrap(obj),ScavTrap(obj)
{
	this->_name = obj._name;
	std::cout<<obj._name<<std::endl;
	std::cout << this->_name <<" : Copy constructor of DiamondTrap called"<<std::endl;
	*this = obj;
	return;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout<<"Copy assignment operator of DiamondTrap called"<<std::endl;
	this->_name = obj._name;
	this->_hitPoint = obj._hitPoint;
	this->_energyPoint =obj._energyPoint;
	this->_energyPoint = obj._attackDamage;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout<<"This DiamondTrap name is " << this->_name 
		<<" and this ClapTrap name is "<< ClapTrap::_name <<std::endl;
}

// void ScavTrap::takeDamage(unsigned int amount)
// {
// 	if (this->_hitPoint == 0 || this->_energyPoint == 0)
// 	{
// 		std::cout<<this->_name<<" is died!"<<std::endl;
// 		return;
// 	}
// 	if (amount >= this->_hitPoint)
// 	{	
// 		this->_hitPoint = 0;
// 		std::cout<<"ScavTrap "<< this->_name <<" is died!"<<std::endl;
// 		return;
// 	}
// 	this->_hitPoint = this->_hitPoint - amount;
// 	std::cout<<"ScavTrap "<< this->_name <<" take damage and loses "<<amount<<" hit points!" << std::endl;	

// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
// 	if (this->_hitPoint == 0 || this->_energyPoint == 0)
// 	{
// 		std::cout<<this->_name<<" is died!"<<std::endl;
// 		return;
// 	}
// 	this->_hitPoint +=	amount;
// 	std::cout << "ScavTrap" << this->_name<< " is repaired and gets " << amount<< " hit points!" << std::endl;
// }