#include "../inc/Serializer.hpp"

int main() {
	Data *data = new Data;
	Data *deserial;
	uintptr_t serial;

	data->value = "42 School";
	serial = Serializer::serialize(data);
	deserial = Serializer::deserialize(serial);
	std::cout << "Serialized: " << serial << std::endl;
	std::cout << "Original: " << data->value << std::endl;
	std::cout << "Deserialized: " << deserial->value << std::endl;
	std::cout << "Memory address check:\n    Original: " << data << "\n    Deserial: " << deserial << std::endl;
	delete data;
}