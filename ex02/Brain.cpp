
#include "Brain.hpp"

Brain::Brain()
{
    int i = -1;
    while(++i < 100)
        _ideas[i] = "";
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &Or)
{
    int i = -1;
    while (++i < 100)
        this->_ideas[i] = Or._ideas[i];
    return *this;
}

void    Brain::set_idea(int i, const std::string &idea)
{
    if (i >= 0 && i < 100)
        _ideas[i] = idea;
}

std::string Brain::get_idea(int i) const
{
    if (i >= 0 && i < 100)
        return _ideas[i];
    return "";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}