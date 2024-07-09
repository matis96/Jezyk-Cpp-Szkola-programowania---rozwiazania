//zad5.cpp
#include <iostream>
#include <valarray>
#include <string>

using namespace std;
template <class T>
int reduce(T ar[], int n);
int main()
{
    long test[12] = {8, 1512, 55, 89, -18, 42, 1600, 59, 1311, 55, 55, 42};
    string test2[12] = {"szczaw", "okno", "winda", "szczaw", "szczaw", "winda", "zamiec", "okno", "kupa", "wiadro", "amen", "mucha"};
    int len1 = reduce(test, 12);
    int len2 = reduce(test2, 12);
    for (int i =0; i<len1; i++)
        cout<<test[i]<<" ";
    cout<<endl;
    for (int i =0; i<len2; i++)
        cout<<test2[i]<<" ";

}

template <class T>
int reduce(T ar[], int n)
{
    sort(ar, ar+n);
    auto it = unique(ar, ar+n);
    return it-ar-1;
}
