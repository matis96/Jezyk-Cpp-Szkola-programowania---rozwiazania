//zad1.cpp

#include <iostream>
struct osoba {
char imie[20];
char nazwisko[20];
int ocena;
int wiek;};

int main()
{
    using namespace std;
    osoba uczen;
    cout<<"Jak masz na imie? ";
    cin.getline(uczen.imie, 20);
    cout<<"Jak sie nazywasz? ";
    cin.getline(uczen.nazwisko, 20);
    cout<<"Na jaka ocene zaslugujesz? ";
    cin>>uczen.ocena;
    cout<<"Ile masz lat? ";
    cin>>uczen.wiek;
    uczen.ocena-=1;

    cout<<"Nazwisko: "<<uczen.nazwisko<<", "<<uczen.imie<<endl;
    cout<<"Ocena: "<<uczen.ocena<<endl;
    cout<<"Wiek: "<<uczen.wiek<<endl;
}
