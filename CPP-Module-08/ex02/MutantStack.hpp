#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {};
		MutantStack(const MutantStack & src): MutantStack<T>::stack(src) {};
		~MutantStack(void) {};

		MutantStack<T>& operator=(const MutantStack<T> & src)
		{
			MutantStack<T>::stack::operator=(src);
			return (*this);
		};

		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };

		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		const_iterator cbegin() const { return this->c.cbegin(); };
		const_iterator cend() const { return this->c.cbegin(); };

		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() { return this->c.rbegin(); };
		reverse_iterator rend() { return this->c.rend(); };

		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator crbegin() const { return this->c.crbegin(); };
		const_reverse_iterator crend() const { return this->c.crend(); };
};

#endif