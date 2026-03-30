#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	brain = new Brain(*src.brain);
	type = src.type;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &Or)
{
	if (this != &Or)
	{
		type = Or.type;
		*brain = *Or.brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::set_idea(int index, const std::string &idea)
{
	brain->set_idea(index, idea);
}

std::string Cat::get_idea(int index) const
{
	return brain->get_idea(index);
}

void Cat::makeSound() const
{
	std::cout << "Cat make sound" << std::endl;
}