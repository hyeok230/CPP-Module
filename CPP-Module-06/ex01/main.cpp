#include "Serialization.hpp"

int main()
{
	Data junylee;

	junylee.age = 20;
	junylee.name = "junylee";

	uintptr_t out = serialize(&junylee);

	std::cout << "Serialized : " << out << std::endl;

	Data *data = deserialize(out);
	
	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Age: " << data->age << std::endl;
}