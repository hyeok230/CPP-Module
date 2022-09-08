#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);

	for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	
	try 
	{
		std::vector<int>::iterator iter1 = easyfind(v, 5);
		std::cout << "found : " << *iter1 << std::endl;
		std::vector<int>::iterator iter2 = easyfind(v, 10);
		std::cout << "found : " << *iter2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}