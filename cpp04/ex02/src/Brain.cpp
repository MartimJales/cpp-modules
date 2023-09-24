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
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = "Idea " + intToString(i);
    }
}

Brain::Brain(const Brain &obj)
{
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = obj.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &obj)
{
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
}
