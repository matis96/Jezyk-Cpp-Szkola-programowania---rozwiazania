//zad4.cpp
#include <iostream>
#include <valarray>

using namespace std;
int reduce(long ar[], int n);
int main()
{
    long test[12] = {8, 1512, 55, 89, -18, 42, 1600, 59, 1311, 55, 55, 42};
    int len = reduce(test, 12);
    for (int i =0; i<len; i++)
        cout<<test[i]<<endl;
}


int reduce(long ar[], int n)
{
    sort(ar, ar+n);
    auto it = unique(ar, ar+n);
    return it-ar-1;
}
