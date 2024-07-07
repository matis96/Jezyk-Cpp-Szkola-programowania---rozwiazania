//zad6.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Sponsor {
    string nazwisko;
    double kwota;
};
int main()
{
    int n;
    cout << "Podaj liczbe wplacajacych: ";
    cin >> n;
    vector<Sponsor> sponsorzy(n);
    for (int i = 0; i<n; i++)
    {
        cout << "Podaj nazwisko Sponsora nr " << i+1 <<": ";
        cin >> sponsorzy[i].nazwisko;
        cin >> sponsorzy[i].kwota;
    }
    cout << "Nasi Wspaniali Sponsorzy:"<<endl;
    int k = 0;
    for (int i=0; i<n; i++)
    {
        if (sponsorzy[i].kwota >= 10000)
        {
            cout << sponsorzy[i].nazwisko<<" "<<sponsorzy[i].kwota<<endl;
            k++;
        }
    }
    if (k==0)
        cout <<"brak"<<endl;
    cout << "Nasi Sponsorzy: "<<endl;
    k=0;
    for (int i=0; i<n; i++)
    {
        if (sponsorzy[i].kwota < 10000)
        {
            cout << sponsorzy[i].nazwisko<<" "<<sponsorzy[i].kwota<<endl;
            k++;
        }
    }
    if (k==0)
        cout <<"brak"<<endl;
}
