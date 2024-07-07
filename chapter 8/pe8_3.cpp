//zad3.cpp
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void string_toupper(string &);
int main()
{
    string test;
    cout<<"Podaj lancuch (q, aby skonczyc): ";
    getline(cin, test);
    while (test != "q")
    {
        string_toupper(test);
        cout<<"Podaj lancuch (q, aby skonczyc): ";
        getline(cin, test);
    }
    cout<<"Do widzenia";
}

void string_toupper(string & str)
{
    for (int i =0; i<str.length(); i++)
        str[i] = toupper(str[i]);
    cout<<str<<endl;
}
