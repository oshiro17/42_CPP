#include "ScavTrap.hpp"
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name <<" : Constructor of ScavTrap called"<<std::endl;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}
ScavTrap::~ScavTrap()
{
	std::cout << this->_name <<" : Destroying the ScavTrap " << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode. Guarding the gate!" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& obj):ClapTrap(obj)
{
	std::cout << this->_name <<" : Copy constructor of ClapTrap called"<<std::endl;
	*this = obj;
	return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout<<"Copy assignment operator of ClapTrap called"<<std::endl;
	this->_name = obj._name;
	this->_hitPoint = obj._hitPoint;
	this->_energyPoint =obj._energyPoint;
	this->_energyPoint = obj._attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
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
// 		std::cout<<"ClapTrap "<< this->_name <<" is died!"<<std::endl;
// 		return;
// 	}
// 	this->_hitPoint = this->_hitPoint - amount;
// 	std::cout<<"ClapTrap "<< this->_name <<" take damage and loses "<<amount<<" hit points!" << std::endl;	

// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
// 	if (this->_hitPoint == 0 || this->_energyPoint == 0)
// 	{
// 		std::cout<<this->_name<<" is died!"<<std::endl;
// 		return;
// 	}
// 	this->_hitPoint +=	amount;
// 	std::cout << "ClapTrap" << this->_name<< " is repaired and gets " << amount<< " hit points!" << std::endl;
// }