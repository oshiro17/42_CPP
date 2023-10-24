#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	// ScavTrap a("A");
	DiamondTrap b();

	// a.attack("B");
	b.takeDamage(20000);
	b.beRepaired(1000);
	b.highFivesGuys();
	b.attack("A");
	b.whoAmI();
	// a.takeDamage(10);
	// a.beRepaired(10);
	// a.showStatus();
	return (0);
}