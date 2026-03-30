#include "Wrong_cat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	*this = src;
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &Or)
{
	this->type = Or.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat make sound" << std::endl;
}