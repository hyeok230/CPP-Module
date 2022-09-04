#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : arguments" << std::endl;
		return (1);
	}

	std::string value = argv[1];

	Convert convert(value);

	std::cout << convert;

	return (0);
}