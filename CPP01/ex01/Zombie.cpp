#include "Zombie.hpp"
Zombie::Zombie() {
}


Zombie::~Zombie() {
    std::cout << "Zombie " << this->_zombieName << " has been destroyed." << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->_zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_zombieName = name;
}