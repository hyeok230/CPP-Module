#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : arguments" << std::endl;
	}

	std::string literals = argv[1];

	Convert convert(literals);
}