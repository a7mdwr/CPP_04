#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp" 

class Cat : public Animal
{
	private:
		Brain *brain;
	public: 
		Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &Or);
		~Cat();

		void makeSound() const;
		void set_idea(int i, const std::string &idea);
        std::string get_idea(int i) const;
};

#endif

