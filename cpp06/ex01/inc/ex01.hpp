#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <iostream>

class Data {
public:
    // Assume Data has some data members
    int value;

    // Constructor
    Data(int val) : value(val) {}
};

class Serializer {
public:
    // Serialize a pointer to uintptr_t
    static uintptr_t serialize(Data* ptr);

    // Deserialize uintptr_t to a pointer
    static Data* deserialize(uintptr_t raw);
};

#endif // SERIALIZER_HPP
