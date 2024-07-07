//zad2.cpp
#include <iostream>
struct Batonik{
    const char* producent;
    double waga;
    int kalorie;
};
using namespace std;
void set_Batonik(Batonik &typ_batonik, const char *nazwa_batonik ="Millennium Munch" , double waga_batonik = 2.85,
                 int kalorie_batonik = 350);
void show_Batonik(const Batonik &);
int main()
{
    Batonik moj_baton;
    set_Batonik(moj_baton, "Mars", 3.45, 319);
    show_Batonik(moj_baton);
}
void set_Batonik(Batonik &typ_batonik, const char *nazwa_batonik, double waga_batonik,
                 int kalorie_batonik)
{
    typ_batonik.producent = nazwa_batonik;
    typ_batonik.waga = waga_batonik;
    typ_batonik.kalorie = kalorie_batonik;
}

void show_Batonik(const Batonik &baton)
{
    cout<<"Producent: "<<baton.producent<<endl;
    cout<<"Waga: "<<baton.waga<<endl;
    cout<<"Kalorie: "<<baton.kalorie<<endl;
}
