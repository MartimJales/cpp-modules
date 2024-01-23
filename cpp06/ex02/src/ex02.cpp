#include "../inc/ex02.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base::~Base() {} // Definition for the virtual destructor

// Definitions for pure virtual function in Base class
void A::identify() const {
    std::cout << "A" << std::endl;
}

void B::identify() const {
    std::cout << "B" << std::endl;
}

void C::identify() const {
    std::cout << "C" << std::endl;
}

Base* generate() {
    // Seed the random number generator with the current time
    std::srand(std::time(nullptr));

    // Generate a random number (0, 1, or 2)
    int randomValue = std::rand() % 3;

    // Instantiate and return the appropriate class based on the random number
    switch (randomValue) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr; // Should not happen
    }
}

