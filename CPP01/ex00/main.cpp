#include "Zombie.hpp"

// void	randomChump(std::string name)
// {
// 	Zombie	zombi(name);
// 	zombi.announce();
// }

// Zombie	*newZombie(std::string name)
// {
// 	return (new Zombie(name));
// }

int	main(void)
{
	Zombie stackZombie("stack");
	stackZombie.announce();
	Zombie *heapZombie = newZombie("heap");
	heapZombie->announce();
	delete heapZombie;
	randomChump("random");
	return(0);
}