//zad5.cpp
#include <iostream>
const int Months = 12;
const int Years = 3;
int main()
{
    using namespace std;
    const char * miesiace[Months] =
    {
        "Styczen",
        "Luty",
        "Marzec",
        "Kwiecien",
        "Maj",
        "Czerwiec",
        "Lipiec",
        "Sierpien",
        "Wrzesien",
        "Pazdziernik",
        "Listopad",
        "Grudzien"
    };
    int sprzedaz[Years][Months];
    int suma[Years] = {0};
    int suma_all = 0;
    cout <<"Podaj liczbe sztuk sprzedanych ksiazek w poszczegolnych latach"<<endl;
    for (int j = 0; j<Years; j++)
    {
        cout<<"Rok: "<<j+1<<endl;
        for (int i = 0; i<Months; i++)
        {
            cout << miesiace[i]<<": ";
            cin >> sprzedaz[j][i];
            suma[j] += sprzedaz[j][i];
        }
    }
    cout << "Lacznie sprzedano: "<<endl;
    for (int i =0; i<Years; i++)
    {
        cout << "Rok "<<i+1<<": "<<suma[i]<<endl;
        suma_all += suma[i];
    }
    cout <<"Wszystkich sztuk: "<<suma_all;


}
