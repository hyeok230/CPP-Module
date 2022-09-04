#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

# include <iostream>

typedef struct
{
	int age;
	std::string name;
} Data;

uintptr_t serialize(Data *ptr);

Data *deserialize(uintptr_t raw);

#endif