#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "Wrong_animal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &src);
	WrongCat &operator=(const WrongCat &Or);
	~WrongCat();

	void makeSound() const;
};

#endif