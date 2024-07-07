//zad2.cpp
#include <iostream>
const int ArSize = 5;
int main()
{
    using namespace std;
    double datki[ArSize];
    cout << "Podaj wysokosc datku"
         << "\nProgram konczy prace po wpisaniu "<< ArSize << " datkow"
         << "\nlub po wpisaniu wartosci nieliczbowej\n";
    cout << "datek 1: ";
    int i = 0;
    double temp;
    //cin >> temp;
    while (i < ArSize && cin >> datki[i])
        if (++i < ArSize)
            cout << "datek " << i+1 << ".: ";
    //int j = 0;
    double total = 0.0;
    for (int j = 0; j<i; j++)
        total += datki[j];
    if (i==0)
        cout << "Brak datkow!";
    else
    {
        cout << "Srednia wartosc datku: " << total/i<<endl;
        cout << "Wieksze datki to:\n";
        for (int j = 0; j<i; j++)
            if (datki[j]>total/i)
                cout << "datek "<< j+1 <<".: " << datki[j] <<endl;
    }


}
