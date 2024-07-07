//zad4.cpp
#include <string>
#include <iostream>

int main()
{
    using namespace std;
    string imie;
    string nazwisko;
    string str;
    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj nazwisko: ";
    cin>>nazwisko;
    str=nazwisko + ", " +imie;
    cout<<str;
    return 0;
}
