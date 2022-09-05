#include "iter.hpp"

int main()
{
    int int_array[5] = {1, 2, 3, 4, 5};
    std::cout << "===============type int================" << std::endl;
    iter(int_array, 5, &display);
    std::cout << std::endl;

    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "===============type char===============" << std::endl;
    iter(char_array, 5, &display);
    std::cout << std::endl;

    double	double_array[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
    std::cout << "==============type double==============" << std::endl;
    iter(double_array, 5, &display);
    std::cout << std::endl;

    float float_array[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
    std::cout << "==============type float===============" << std::endl;
    iter(float_array, 5, &display);
    std::cout << std::endl;

    std::string string_array[5] = { "CPP1", "CPP2", "CPP3", "CPP4", "CPP5" };
    std::cout << "==============type string==============" << std::endl;
    iter(string_array, 5, &display);
    std::cout << std::endl;
}