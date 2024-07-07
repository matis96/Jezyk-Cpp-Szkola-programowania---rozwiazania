//zad9.cpp
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
struct Sponsor {
    string nazwisko;
    double kwota;
};
int main()
{
    int n;
    ifstream myFile;
    myFile.open("zad9.txt");
    myFile >> n;
    //cout << n;
    vector<Sponsor> sponsorzy(n);
    string temp1;
    getline(myFile, temp1);
    for (int i = 0; i<n; i++)
    {
        getline(myFile, sponsorzy[i].nazwisko);
        myFile >> sponsorzy[i].kwota;
        getline(myFile, temp1);
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
    myFile.close();
}
