#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

int main() {
    // Generate a random instance and identify its type
    Base* randomInstance = generate();
    randomInstance->identify();

    // Clean up
    delete randomInstance;

    // Test with specific instances
    A aInstance;
    B bInstance;
    C cInstance;

    Base* aPtr = &aInstance;
    Base* bPtr = &bInstance;
    Base* cPtr = &cInstance;

    aPtr->identify(); // Should print "A"
    bPtr->identify(); // Should print "B"
    cPtr->identify(); // Should print "C"

    // Clean up for specific instances (not necessary for stack-allocated objects)
    // No need to delete aPtr, bPtr, or cPtr as they point to stack-allocated objects

    return 0;
}


