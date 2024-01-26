#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

int main() {
    // Generate a random instance and identify its type
    std::cout << "Random generation: " << std::endl;
    Base* randomInstance = generate();
    randomInstance->identify();

    // Clean up
    delete randomInstance;

    A a;
    B b;
    C c;

    Base* aPtr = &a;
    Base* bPtr = &b;
    Base* cPtr = &c;

    std::cout << "Child identify: " << std::endl;

    aPtr->identify();
    bPtr->identify();
    cPtr->identify();

    identify(aPtr);
    identify(bPtr);
    identify(cPtr);

    identify(a);
    identify(b);
    identify(c);

    // Testar com um ponteiro NULL
    Base* nullPtr = NULL;
    identify(nullPtr);

    return 0;
}


