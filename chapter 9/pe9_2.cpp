//zad2.cpp
#include <iostream>
#include <string>
using namespace std;
void strcount(const string str);

int main()
{
    string input;
    char next;

    cout<<"Wprowadz wiersz:\n";
    getline(cin, input);
    while (!(input=="\0"))
    {
        //cin.get(next);
        strcount(input);
        cout<<"Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
        getline(cin, input);
    }
    cout<< "Koniec\n";
    return 0;
}
void strcount(const string str)
{
    static int total = 0;          // statyczna zmienna lokalna
    int count = 0;                 // automatyczna zmienna lokalna

    cout << "\"" << str << "\" zawiera ";
    int i=0;
    while (str[i++])
        count++;
    total += count;
    cout << count << " znakow\n";
    cout << "Lacznie "<< total << " znakow\n";
}
