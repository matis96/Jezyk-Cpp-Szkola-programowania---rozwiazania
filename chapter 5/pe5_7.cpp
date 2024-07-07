//zad7.cpp
#include <iostream>
#include <string>
using namespace std;
struct car{
    string marka;
    int rok;
};
int main()
{
    int i;
    cout<<"Ile samochodow chcesz skatalogowac? ";
    cin >> i;
    cin.get();
    car * ps = new car[i];
    for (int j =0; j<i; j++)
    {
        cout << "Samochod #"<<j+1<<":"<<endl;
        cout << "Prosze podac marke: ";
        getline(cin, ps[j].marka);
        cout << "Rok produkcji: ";
        cin >> ps[j].rok;
        cin.get();
    }
    for (int j = 0; j<i; j++)
        cout << ps[j].rok<<" " << ps[j].marka<<endl;
}
