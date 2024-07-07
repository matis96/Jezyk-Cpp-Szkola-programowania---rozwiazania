#include "golf.h"
#include <iostream>
#include <cstring>
using namespace std;
void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
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
    setgolf(g, tmp, hc);
    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    cout<<"Gracz: "<<g.fullname<<", handicap: "<<g.handicap<<endl;
}
