//zad9.cpp
#include <iostream>

struct Batonik{
    char marka[20];
    float waga;
    int kal;
    };

int main()
{
    using namespace std;
    Batonik * snack = new Batonik[3] {{"Mocha Munch", 2.3, 350}, {"Mars", 2.5, 359}, {"Milki Way", 1.8, 289}};
    cout<<"Rodzaj: "<<snack->marka<<endl;
    cout<<"waga: "<<snack->waga<<endl;
    cout<<"liczba kalorii: "<<snack->kal<<endl;

    cout<<"Rodzaj: "<<(snack+1)->marka<<endl;
    cout<<"waga: "<<(snack+1)->waga<<endl;
    cout<<"liczba kalorii: "<<snack[1].kal<<endl;

    cout<<"Rodzaj: "<<snack[2].marka<<endl;
    cout<<"waga: "<<snack[2].waga<<endl;
    cout<<"liczba kalorii: "<<snack[2].kal<<endl;
    }
