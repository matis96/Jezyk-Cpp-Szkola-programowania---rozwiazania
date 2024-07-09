//pe17_5.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

int main()
{
    using namespace std;
    ifstream fBolek("bolek.dat"), fLolek("lolek.dat");
    ofstream out("bolilol.dat");
    vector<string> Bolek, Lolek;
    string input;
    while (fBolek>>input)
        Bolek.push_back(input);
    while (fLolek>>input)
        Lolek.push_back(input);
    sort(Bolek.begin(), Bolek.end());
    sort(Lolek.begin(), Lolek.end());
    cout << "Lista przyjaciol Bolka: "<<endl;
    for (auto it = Bolek.begin(); it!=Bolek.end(); it++)
        cout<<*it<<" ";
    cout << "\nLista przyjaciol Lolka: "<<endl;
    for (auto it = Lolek.begin(); it!=Lolek.end(); it++)
        cout<<*it<<" ";
    Bolek.insert(Bolek.end(), Lolek.begin(), Lolek.end());
    sort(Bolek.begin(), Bolek.end());
    auto it_end = unique(Bolek.begin(), Bolek.end());
    for (auto it = Bolek.begin(); it!=it_end; it++)
        out<<*it<<endl;
}
