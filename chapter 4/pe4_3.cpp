//zad3.cpp
#include <cstring>
#include <iostream>

int main()
{
    using namespace std;
    char imie[20];
    char nazwisko [20];
    char str[80];
    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj nazwisko: ";
    cin>>nazwisko;
    strcpy(str, nazwisko);
    strcat(str, ", ");
    strcat(str, imie);
    puts(str);
    return 0;
}
