#include "Fixed.hpp"
#include "Point.hpp"
#include <math.h>
#include <iostream>

int main( void )
{
	Point B(1,1);
	Point A(2,5);
	Point C(4,1);
	Point P(2.0f,5.1);
	if(bsp(A, B, C, P))
		std::cout<<"(>o<)"<<std::endl;
	// else
		// std::cout<<"pは abcのsoto"<<std::endl;
	return 0;
}
