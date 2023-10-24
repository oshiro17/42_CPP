#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& obj);
    ~Animal();
    Animal& operater=(const Aniaml& Animal);
}
#endif