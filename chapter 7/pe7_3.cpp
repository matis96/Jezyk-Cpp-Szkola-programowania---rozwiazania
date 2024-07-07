//zad3.cpp
#include <iostream>

using namespace std;
struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};
void display(pudlo);
void vol_fill(pudlo *);
int main()
{
    pudlo Pojemnik = {"Ikea", 60, 40, 30};
    vol_fill(&Pojemnik);
    display(Pojemnik);
}
void display(pudlo Rzecz)
{
    cout << "Producent: " << Rzecz.producent<<endl;
    cout << "Wysokosc: " << Rzecz.wysokosc<<endl;
    cout << "Szerokosc: " << Rzecz.szerokosc<<endl;
    cout << "Dlugosc: " << Rzecz.dlugosc << endl;
    cout << "Objetosc: " << Rzecz .objetosc <<endl;
}
void vol_fill(pudlo * Rzecz)
{
    Rzecz->objetosc = Rzecz->wysokosc * Rzecz->szerokosc * Rzecz->dlugosc;
}
