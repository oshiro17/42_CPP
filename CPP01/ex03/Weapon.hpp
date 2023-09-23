#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon( std::string type );
	~Weapon();
	std::string&	getType( void );
	void			setType( std::string newType );
};

#endif