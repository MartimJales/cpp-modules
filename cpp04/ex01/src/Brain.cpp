#include "../inc/Brain.hpp"

std::string intToString(int num)
{
    std::string result;
    while (num > 0)
    {
        char digit = '0' + (num % 10);
        result = digit + result;
        num /= 10;
    }
    return result.empty() ? "0" : result;
}

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = "Idea " + intToString(i);
    }
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain has been created by copying" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = obj.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain has been assigned" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 100; ++i)
        {
            ideas[i] = obj.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
