#include "Zombie.hpp"

int	main(void)
{
	int	N;
	int	i;

	N = 5;
	Zombie *zombies = zombieHorde(N, "heap");
	for(i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return 0;
}