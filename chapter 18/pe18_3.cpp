//pe18_3.cpp
#include <iostream>

template<typename T>
long double sum_values(const T& value)
{
    return value;
}

template<typename T, typename... Args>
long double sum_values(const T& value, const Args&... args)
{
    //double long tot = 0L;
    return (long double) value+sum_values(args...);
}
int main()
{
    long double total = sum_values(3, 5.20, 6.96, 3, 8, 2359439812, 1213.01, 10e6);
    std::cout<< total;
}
