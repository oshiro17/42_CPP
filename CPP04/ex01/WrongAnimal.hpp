#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
#include <iostream>
class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& obj);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& obj);
    const std::string&	getType(void) const;
	void		makeSound(void) const;
};
#endif