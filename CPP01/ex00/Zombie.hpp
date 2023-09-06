#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie{
	private:
		std::string _zombiName;
	public:
		Zombie(std::string name);
		void announce();
		~Zombie();
};
#endif