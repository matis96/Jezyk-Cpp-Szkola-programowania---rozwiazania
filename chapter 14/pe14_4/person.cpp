#include "person.h"
#include "card.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//metody klasy Person

Person::~Person() {}

//metody chronione
void Person::Data() const
{
    cout << "Imię i nazwisko: " << fullname << endl;
}
void Person::Get()
{
    getline(cin, fullname);
}

//metody klasy Gunslinger
void Gunslinger::Set()
{
    cout << "Podaj imię i nazwisko rewolwerowca: ";
    Person::Get();
    Get();
}

void Gunslinger::Show() const
{
    cout << "Kategoria: rewolwerowiec\n";
    Person::Data();
    Data();
}

//metody chronione
void Gunslinger::Data() const
{
    cout << "Czas na oddanie strzału: "<<fDraw<<endl;
}
void Gunslinger::Get()
{
    cout << "W jakim czasie rewolwerowiec wyciąga broń? ";
    cin >> fDraw;
    while (cin.get() != '\n')
        continue;
}


//metody klasy PokerPlayer
PokerPlayer::PokerPlayer() : Person()
{
    //srand(time(NULL));
    //card = rand()%52+1;
}
void PokerPlayer::Set()
{
    cout << "Podaj imię i nazwisko pokerzysty: ";
    Person::Get();
}

void PokerPlayer::Show() const
{
    cout<< "Kategoria: pokerzysta\n";
    Person::Data();
    Data();
}
Card PokerPlayer::Draw()
{
    //srand(time(NULL));
    Card temp;
    return temp;
}
//metody chronione
void PokerPlayer::Data() const
{
    //cout<<"Karta: "<<card<<endl;
    karta.Show();
}

//metody klasy BadDude
void BadDude::Set()
{
    cout << "Podaj imię i nazwisko BadDude: ";
    Person::Get();
    Get();
}

void BadDude::Show() const
{
    cout << "Kategoria: BadDude\n";
    Person::Data();
    Data();
}
//metody chronione
void BadDude::Get()
{
    Gunslinger::Get();
    //PokerPlayer::Get();
}

void BadDude::Data() const
{
    Gunslinger::Data();
    PokerPlayer::Data();
}


