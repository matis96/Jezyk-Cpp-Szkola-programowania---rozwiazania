//zad5.cpp
#include <iostream>
double silnia(int n);

int main()
{
    using namespace std;
    int n;
    double wynik;
    cout << "Podaj liczbe, aby policzyc silnie: ";
    while (cin >> n)
    {
        wynik = silnia(n);
        cout << wynik;
        cout << "\nPodaj liczbe, aby policzyc silnie. Wcisnij q by zakonczyc: ";
    }
}

double silnia(int n)
{
    if (n>1)
        return n*silnia(n-1);
    else
        return 1;
}
