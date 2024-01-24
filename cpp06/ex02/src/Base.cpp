#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

Base::~Base() {} // Definition for the virtual destructor

Base* generate() {
    // Seed the random number generator with the current time
    std::srand(std::time(NULL));

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
            return NULL; // Should not happen
    }
}

void identify(Base* p) {
    // Cast the pointer to a pointer to an A, B, or C
    A* aPtr = dynamic_cast<A*>(p);
    B* bPtr = dynamic_cast<B*>(p);
    C* cPtr = dynamic_cast<C*>(p);

    // If the cast was successful, print the type
    if (aPtr != NULL) {
        std::cout << "A" << std::endl;
    } else if (bPtr != NULL) {
        std::cout << "B" << std::endl;
    } else if (cPtr != NULL) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base& p) {
    // Cast the pointer to a pointer to an A, B, or C
    A* aPtr = dynamic_cast<A*>(&p);
    B* bPtr = dynamic_cast<B*>(&p);
    C* cPtr = dynamic_cast<C*>(&p);

    // If the cast was successful, print the type
    if (aPtr != NULL) {
        std::cout << "A" << std::endl;
    } else if (bPtr != NULL) {
        std::cout << "B" << std::endl;
    } else if (cPtr != NULL) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}