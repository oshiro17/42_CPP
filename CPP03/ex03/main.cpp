#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap a("A");
	DiamondTrap b("");

	a.attack("B");
	b.takeDamage(5);
	b.highFivesGuys();
	b.attack("A");
	a.takeDamage(10);
	a.beRepaired(10);
	a.showStatus();
	return (0);
}