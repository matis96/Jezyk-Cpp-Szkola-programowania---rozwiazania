//zad8.cpp
#include <iostream>
#include <fstream>
#include <string>
int main()
{
    using namespace std;
    int wynik = 0;
    string temp;
    ifstream myFile;
    myFile.open("zad8.txt");
    while (getline(myFile, temp))
    {
        wynik += temp.length();
    }
    cout << "Wczytanych znakow: " << wynik;
    myFile.close();
}
