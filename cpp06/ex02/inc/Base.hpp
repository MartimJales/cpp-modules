#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdint.h>


class Base {
public:
    virtual ~Base();
    virtual void identify() const = 0;
};

Base* generate();
void identify(Base* p);
void identify(Base& p);

#endif // BASE_HPP
