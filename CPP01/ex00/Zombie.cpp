#include "Zombie.hpp"

Zombie::Zombie( std::string name) {
    this->_zombiName = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->_zombiName << " has been destroyed." << std::endl;
}

void    Zombie::announce( void ) {
    std::cout << this->_zombiName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}