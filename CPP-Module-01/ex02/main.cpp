#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "string address : " << &brain << std::endl;
	std::cout << "string address by ptr : " << stringPTR << std::endl;
	std::cout << "string address by ref : " << &stringREF << std::endl;

	std::cout << "===============================" << std::endl;

	std::cout << "string : " << brain << std::endl;
	std::cout << "string by ptr : " << *stringPTR << std::endl;
	std::cout << "string by ref : " << stringREF << std::endl;
	return 0;
}