#include <iostream>
#include <cstring>
#include "classic.h"
using namespace std;
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

void Cd::Report() const
{
    cout<<"Band: "<<performers<<endl;
    cout<<"Cd: "<<label<<endl;
    cout<<"Tracks: "<<selections<<endl;
    cout<<"Time: "<<playtime<<endl;
}

Classic::Classic(const char * s3, const char * s1, const char * s2, int n, double x):Cd(s1, s2, n, x)
{
    strcpy(single, s3);
}


void Classic::Report() const
{
    cout<<"Single: "<<single<<endl;
    Cd::Report();
}
