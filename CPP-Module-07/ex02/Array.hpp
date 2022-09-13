#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int length;

    public:
        Array(void) 
        {
            array = new T[0];
            length = 0;
        };
        
        Array(unsigned int n)
        {
            array = new T[n];
            length = n;
        };
        
        Array(const Array & src)
        {
            array = new T[src.size()];
            for (unsigned int i = 0; i < src.size(); i++)
                array[i] = src[i];
            length = src.size();
        };

        Array<T> &operator=(const Array & src)
        {
            array = new T[src.size()];
            for (unsigned int i = 0; i < src.size(); i++)
            {
                array[i] = src[i];
            }
            length = src.size();
            return (*this);
        };

        ~Array(void)
        {
            delete[] array;
        };

        T& operator[](int i) const
        {
            if (i < 0 || i >= static_cast<int>(this->size()))
                throw OutOfBounds();
            return (array[i]);
        };

        T& operator[](int i)
        {
            if (i < 0 || i >= static_cast<int>(this->size()))
                throw OutOfBounds();
            return (array[i]);
        };

        unsigned int size(void) const
        {
            return (length);
        };

        class OutOfBounds : public std::exception
        {
            const char *what() const throw()
			{
				return ("Out of bounds exception");
			}
        };
};

#endif