//zad3.cpp
#include <iostream>

int main()
{
    using namespace std;
    double liczba, suma;
    suma = 0;
    do
    {
        cout << "Podaj liczbe. Zero konczy zabawe" << endl;
        cin >> liczba;
        suma += liczba;
        cout << "Aktualna suma wynosi: " << suma << endl;
    } while (liczba != 0);
    cout << "Do widzenia";

}
