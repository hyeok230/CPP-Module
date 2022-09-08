#include "Span.hpp"

Span::Span(void) : size(0) {}

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span & src)
{
	size = src.size;
	v = src.v;
}

Span& Span::operator=(const Span & src)
{
	size = src.size;
	v = src.v;
	return (*this);
}

Span::~Span(void) {}

void Span::addNumber(int n)
{
	if (v.size() >= size)
		throw FullElementsStored();
	v.push_back(n);
}

long Span::shortestSpan(void)
{
	long result;

	if (v.size() <= 2)
		throw NotEnoughElements();

	std::vector<int> copy = v;

	std::sort(copy.begin(), copy.end());

	std::vector<int>::iterator pre_iter = copy.begin();
	std::vector<int>::iterator next_iter = ++copy.begin();

	result = static_cast<long>(*next_iter) - *pre_iter;

	while (next_iter != copy.end())
	{
		if (static_cast<long>(*next_iter) - *pre_iter < result)
			result = static_cast<long>(*next_iter) - *pre_iter;
		pre_iter = next_iter;
		next_iter++;
	}

	return (result);
}

long Span::longestSpan(void)
{
	long result;

	if (v.size() <= 2)
		throw NotEnoughElements();

	std::vector<int> copy = v;

	std::sort(copy.begin(), copy.end());


	result = static_cast<long>(copy.back()) - copy.front();

	return (result);
}

void Span::fillFully(void)
{
	srand(time(NULL));
	while (v.size() < size)
	{
		addNumber(rand() % 100);
	}
}