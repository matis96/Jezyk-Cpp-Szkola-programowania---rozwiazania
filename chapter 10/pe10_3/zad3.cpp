#include "zad3.h"
#include <string.h>
#include <iostream>
using namespace std;
golf::golf()
{
    fullname[0]='\0';
    handicap = 0;
}
golf::golf(const char *c, int n)
{
    strncpy(fullname, c, Len);
    handicap = n;
}

int golf::setgolf()
{
    char tmp[Len];
    int hc;
    cout<<"Podaj nazwisko gracza: ";
    cin.get(tmp, Len);
    if (*tmp=='\0')
        return 0;
    cin.get();
    cout<<"Podaj handicap gracza: ";
    cin >> hc;
    cin.get();
    golf tmp_golf(tmp, hc);
    *this = tmp_golf;
    return 1;
    //strncpy(this->fullname, g.fullname, Len);
    //this->handicap = g.handicap;
}

void golf::handicap_set(int hc)
{
    handicap = hc;
}

void golf::showgolf() const
{
    cout<<"Gracz: "<<fullname<<endl;
    cout<<"Handicap: "<<handicap<<endl;
}
