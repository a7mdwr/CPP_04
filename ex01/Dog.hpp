#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &Or);
		~Dog();

		void makeSound() const;
		void set_idea(int i, const std::string &idea);
        std::string get_idea(int i) const;
};

#endif