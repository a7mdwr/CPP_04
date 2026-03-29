#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{	
public: 
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &Or);
	~Cat();

	void makeSound() const;
};

#endif

