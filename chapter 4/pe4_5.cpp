//zad5.cpp
#include <iostream>

struct Batonik{
    char marka[20];
    float waga;
    int kal;
    };

int main()
{
    using namespace std;
    Batonik snack = {"Mocha Munch", 2.3, 350};
    cout<<"Rodzaj: "<<snack.marka<<endl;
    cout<<"waga: "<<snack.waga<<endl;
    cout<<"liczba kalorii: "<<snack.kal<<endl;
    }
