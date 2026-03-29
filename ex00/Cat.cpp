#include "Cat.hpp"

Cat::Cat()
{
	type = "cat";
	std::cout << "cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	*this = src;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &Or)
{
	this->type = Or.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat make sound" << std::endl;
}