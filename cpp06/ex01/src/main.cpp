#include "../inc/ex01.hpp"

int main() {
    // Create a Data object
    Data originalData(42);

    // Serialize the pointer to the Data object
    uintptr_t serializedValue = Serializer::serialize(&originalData);

    // Deserialize the uintptr_t back to a pointer
    Data* deserializedData = Serializer::deserialize(serializedValue);

    // Check if the deserialized pointer is equal to the original pointer
    if (deserializedData == &originalData) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}
