#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <sstream>

class Brain
{
private:
	std::string	*_ideas[100];
public:
	Brain(void);
	Brain(const Brain& src);
	Brain&	operator=(const Brain& obj);
	~Brain(void);
	const std::string*	getIdea(size_t idx) const;
};

#endif