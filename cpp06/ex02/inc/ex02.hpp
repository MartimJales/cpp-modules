#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
public:
    virtual ~Base(); // Public virtual destructor only
    virtual void identify() const = 0; // Virtual function for identification
};

class A : public Base {
public:
    void identify() const;
};

class B : public Base {
public:
    void identify() const;
};

class C : public Base {
public:
    void identify() const;
};

Base* generate();

#endif // BASE_HPP
