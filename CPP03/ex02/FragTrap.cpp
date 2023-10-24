#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name <<" : Constructor of FragTrap called"<<std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}
FragTrap::~FragTrap()
{
	std::cout << this->_name <<" : Destroying the FragTrap " << std::endl;
}
void FragTrap::highFivesGuys()
{
	if (this->_hitPoint == 0 || this->_energyPoint == 0)
	{
		std::cout<<this->_name<<" is died!"<<std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " high five!\n";
	// std::cout << "FragTrap " << this->_name << " is now in Gate keeper mode. Guarding the gate!" << std::endl;
}
FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << this->_name <<" : Copy constructor of FragTrap called"<<std::endl;
	*this = obj;
	return;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout<<"Copy assignment operator of FragTrap called"<<std::endl;
	this->_name = obj._name;
	this->_hitPoint = obj._hitPoint;
	this->_energyPoint =obj._energyPoint;
	this->_energyPoint = obj._attackDamage;
	return (*this);
}

// void FragTrap::attack(const std::string& target)
// {
// 	if (this->_hitPoint == 0 || this->_energyPoint == 0)
// 	{
// 		std::cout<<this->_name<<" is died!"<<std::endl;
// 		return;
// 	}
// 	this->_energyPoint += -1;
// 	std::cout<<"FragTrap " <<this->_name<< " attacks " << target;
// 	std::cout<<" causing " <<this->_attackDamage<<" points of damage!"<<std::endl;	
// }

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	if (this->_hitPoint == 0 || this->_energyPoint == 0)
// 	{
// 		std::cout<<this->_name<<" is died!"<<std::endl;
// 		return;
// 	}
// 	if (amount >= this->_hitPoint)
// 	{	
// 		this->_hitPoint = 0;
// 		std::cout<<"FragTrap "<< this->_name <<" is died!"<<std::endl;
// 		return;
// 	}
// 	this->_hitPoint = this->_hitPoint - amount;
// 	std::cout<<"FragTrap "<< this->_name <<" take damage and loses "<<amount<<" hit points!" << std::endl;	

// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	if (this->_hitPoint == 0 || this->_energyPoint == 0)
// 	{
// 		std::cout<<this->_name<<" is died!"<<std::endl;
// 		return;
// 	}
// 	this->_hitPoint +=	amount;
// 	std::cout << "FragTrap" << this->_name<< " is repaired and gets " << amount<< " hit points!" << std::endl;
// }