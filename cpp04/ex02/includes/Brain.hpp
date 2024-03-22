#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain& rhs);
        ~Brain();
        Brain& operator=(const Brain& rhs);

        std::string getIdea(unsigned int index) const;
        void setIdea(unsigned int index, std::string idea);
};

#endif