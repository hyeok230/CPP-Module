#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <time.h>

class Span
{
	private:
		unsigned int size;
		std::vector<int> v;

	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span(const Span & src);
		Span& operator=(const Span & src);

		void addNumber(int n);
		long shortestSpan(void);
		long longestSpan(void);
		void fillFully(void);

		class FullElementsStored : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Already Full Elements Stored Error!!");
				}
		};
		
		class NotEnoughElements : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Not Enough Elements Error!!");
				}
		};
};

#endif