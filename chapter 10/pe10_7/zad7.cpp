#include <iostream>
#include <string.h>
#include "zad7.h"
using namespace std;
Plorg::Plorg(const char *name, int x)
{
    strncpy(imie, name, len);
    sytosc = x;
}

void Plorg::sytosc_zmiana(int x)
{
    sytosc = x;
}

void Plorg::show() const
{
    cout<<"Imie: "<<imie<<endl;
    cout<<"Sytosc: "<<sytosc<<endl;
}
