//zad8.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> Bolek, Lolek;
    string input;
    cout<<"Wpisz liste przyjaciol Bolka (wpisz 'koniec', by zakonczyc):\n";
    while(cin>>input && input != "koniec")
        Bolek.push_back(input);
    cout<<"Wpisz liste przyjaciol Lolka (wpisz 'koniec', by zakonczyc):\n";
    while(cin>>input && input != "koniec")
        Lolek.push_back(input);
    Bolek.insert(Bolek.end(), Lolek.begin(), Lolek.end());
    sort(Bolek.begin(), Bolek.end());
    auto it_end = unique(Bolek.begin(), Bolek.end());
    cout<<"Lista zaproszonych przyjaciol:\n";
    for (auto it = Bolek.begin(); it!=it_end; it++)
        cout<<*it<<" ";
}
