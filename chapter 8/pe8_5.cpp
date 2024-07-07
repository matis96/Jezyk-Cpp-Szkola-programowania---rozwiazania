//zad5.cpp
#include <iostream>
template <typename T>
T max5(const T*);
int main()
{
    int test1[5] = {32, 87, 123, 8, -12};
    double test2[5] = {13.12, 57.34, 89.12, 14.1, 0.81};
    int test1_max = max5(test1);
    double test2_max = max5(test2);
    std::cout<<test1_max<<" "<<test2_max;
}
template <typename T>
T max5(const T* test)
{
    T max = test[0];
    for (int i = 1; i<5; i++)
        if (test[i]>max)
            max = test[i];
    return max;
}
