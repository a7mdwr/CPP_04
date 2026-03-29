#include "Animal.hpp" 

Animal::Animal()
{
	type = "Animal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &Or)
{
	this->type = Or.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal make sound" << std::endl;
}