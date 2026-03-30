
#ifndef WRONG_ANIMAL
#define WRONG_ANIMAL

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal &operator=(const WrongAnimal &Or);
	~WrongAnimal();
	std::string getType() const;
	void makeSound() const;
};

#endif