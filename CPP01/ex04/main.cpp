#include "SedIsForLosers.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	Sed sed(argv[1]);
	sed.replace(argv[2], argv[2]);
	return (0);
}