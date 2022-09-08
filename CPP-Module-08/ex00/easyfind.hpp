#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class NoOccurrence : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("No Occurrence Error!");
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int target)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), target);
	if (iter == container.end())
		throw NoOccurrence();
	return iter;
}

#endif