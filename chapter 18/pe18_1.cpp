//pe18_1.cpp
#include <iostream>
#include <initializer_list>
template<typename T>
T average_list(std::initializer_list<T> il);
int main()
{
    using namespace std;
    // lista wartosci typu double wydedukowana na podstawie zawartosci
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
    // lista wartosci typu int, wydedukowana na bazie zawartosci
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    // wymuszona lista wartosci typu double
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;
    return 0;
}

template<typename T>
T average_list(std::initializer_list<T> il)
{
    T tot = 0.0;
    int ct = 0;
    for (auto p = il.begin(); p != il.end(); p++)
    {
        ct++;
        tot += *p;
    }
    return tot/ct;
}
