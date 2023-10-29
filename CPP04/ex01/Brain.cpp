#include "Brain.hpp"

Brain::Brain(void)
{
    std::stringstream ss;

    for (size_t i = 0; i < 100; i++)
    {
        ss.clear();
        ss << i;
        ss >> *(this->_ideas[i]);
    }
    std::cout << "<Brain> Constructor called"<<std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
    std::cout << "<Brain> Copy constructor called"<<std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        for (size_t i = 0; i < 100; i++) {
            this->_ideas[i] = obj._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "<Brain>Destructor called"<< std::endl;
}

const std::string*	Brain::getIdea(size_t idx) const{
    return(this->_ideas[idx]);
}