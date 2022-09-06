#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<std::string> array(5);

	for (int i = 0; i < 5; i++)
	{
		array[i] = std::string("Hello" + std::to_string(i));
	}

    std::cout << "===================check array===================" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << std::endl;
	}

	Array<std::string> array2;

	array2 = array;

    std::cout << "===================check duplicate===================" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << array2[i] << std::endl;
	}

    for (int i = 0; i < 5; i++)
	{
		array2[i] = std::string("Bye" + std::to_string(i));
	}

    std::cout << "===================check deep copy===================" << std::endl;
    for (int i = 0; i < 5; i++)
	{
		std::cout << array2[i] << std::endl;
	}
    for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << std::endl;
	}

	return (0);
}