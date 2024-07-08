#include <iostream>
#include <cstring>
#include "classic.h"
using namespace std;
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[strlen(s1)+1];
    strcpy(performers, s1);
    label = new char[strlen(s2)+1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers)+1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd()
{
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}
void Cd::Report() const
{
    cout<<"Band: "<<performers<<endl;
    cout<<"Cd: "<<label<<endl;
    cout<<"Tracks: "<<selections<<endl;
    cout<<"Time: "<<playtime<<endl;
}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers)+1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * s3, const char * s1, const char * s2, int n, double x):Cd(s1, s2, n, x)
{
    single = new char[strlen(s3)+1];
    strcpy(single, s3);
}

Classic::Classic(const Classic & d) : Cd(d)
{
    single = new char[strlen(d.single)+1];
    strcpy(single, d.single);
}

Classic::Classic() : Cd()
{
    single = nullptr;
}

Classic::~Classic()
{
    delete [] single;
}

Classic & Classic::operator=(const Classic & d)
{
    if (this == &d)
        return *this;
    Cd::operator=(d);
    delete [] single;
    single = new char[strlen(d.single)+1];
    strcpy(single, d.single);
    return *this;
}

void Classic::Report() const
{
    cout<<"Single: "<<single<<endl;
    Cd::Report();
}

