#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T* array, size_t length, void (*f)(T &))
{
    for (size_t i = 0; i < length; i++)
    {
        (*f)(array[i]);
    }
}

template<typename T>
void	display(T& value)
{
	std::cout << value << " ";
}

#endif