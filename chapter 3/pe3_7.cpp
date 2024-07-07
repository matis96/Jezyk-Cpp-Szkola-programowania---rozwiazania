//zad7.cpp
#include <iostream>

int main()
{
    using namespace std;
    float zuzycie, galony, zuz_USA;
    const float km100toMil = 62.14;
    const float gal2l = 3.785;
    cout<<"Podaj zuzycie benzyny na 100 km: ";
    cin>>zuzycie;
    galony = zuzycie/gal2l;
    zuz_USA = km100toMil/galony;
    printf("Zuzycie wynosi %.f mil na galon", zuz_USA);
}
