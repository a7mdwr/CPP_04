
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain& operator=(const Brain &Or);
        Brain(const Brain &src);
        ~Brain();

        void set_idea(int i, const std::string &idea);
        std::string get_idea(int i) const;
};

#endif