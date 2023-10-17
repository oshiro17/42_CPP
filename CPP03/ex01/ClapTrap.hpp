#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class	ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
public:
	ClapTrap(std::string name = "NO_NAME_HOGE");
	ClapTrap(const ClapTrap& obj);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap& operator=(const ClapTrap& obj);
	void showStatus();
};
class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator=(const ScavTrap& obj);
	~ScavTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};
#endif
