#include <string.h>
#include <iostream>
#include "zad2.h"

Person::Person(const string & ln, const char * fn)
{
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::Show() const
{
    cout<<lname<<" "<<fname;
}

void Person::FormalShow() const
{
    cout<<fname<<" "<<lname;
}

