//zad1.cpp
#include <iostream>

int main()
{
    using namespace std;
    const float in = 2.54;
    const int ft2in = 12;
    float h;
    int stopy, reszta;
    cout<<"Podaj swoj wzrost w cm: ___\b\b\b";
    cin>>h;
    stopy = int(h/in);
    reszta = stopy % ft2in;
    printf("Mierzysz %d'%d'' [ft in]", stopy/ft2in, reszta);
    //cout<<"Mierzysz "<<wzrost/cal<<" w calach, a takze "<<wzrost/stopa<<" w stopach";
}
