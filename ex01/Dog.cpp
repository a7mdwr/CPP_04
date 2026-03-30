#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	brain = new Brain(*src.brain);
	type = src.type;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &Or)
{
	if (this != &Or)
	{
		type = Or.type;
		*brain = *Or.brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::set_idea(int i, const std::string &idea)
{
	brain->set_idea(i, idea);
}

std::string Dog::get_idea(int i) const
{
	return brain->get_idea(i);
}

void Dog::makeSound() const
{
	std::cout << "Dog make sound" << std::endl;
}