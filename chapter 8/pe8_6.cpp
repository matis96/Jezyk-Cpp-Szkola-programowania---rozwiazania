//zad6.cpp
#include <iostream>
#include <cstring>
template <typename T>
T maxn(T*, int);
template <>  const char * maxn(const char *test[], int );
int main()
{
    int test1[5] = {32, 87, 123, 8, -12};
    double test2[4] = {13.12, 57.34, 89.12, 14.1};
    int test1_max = maxn(test1, 5);
    double test2_max = maxn(test2, 4);
    std::cout<<test1_max<<" "<<test2_max<<std::endl;
    const char *test3[5] = {"Lorem ipsum", "Lorem ipsum dolor sit amet", "Aliquam a dapibus urna, a venenatis enim. ",
                     "Curabitur vel sapien fermentum", "Donec pretium leo laoreet mi fringilla dignissim."};
    const char *test3_max = maxn(test3, 5);
    std::cout<<test3_max;
}
template <typename T>
T maxn(T* test, int n)
{
    T max = test[0];
    for (int i = 1; i<n; i++)
        if (test[i]>max)
            max = test[i];
    return max;
}

template <>  const char * maxn(const char *test[], int n)
{
    const char * max = test[0];
    for (int i = 1; i<n; i++)
        if (strlen(test[i])>strlen(max))
            max = test[i];
    return max;
}

