#include "emp.h"
using namespace std;

//metody klasy abstr_emp
abstr_emp::~abstr_emp()
{

}

void abstr_emp::ShowAll() const
{
    cout << "Imię: "<<fname<<endl;
    cout << "Nazwisko: "<<lname<<endl;
    cout << "Zawód: "<<job<<endl;
}

void abstr_emp::SetAll()
{
    cout << "Podaj imię: ";
    getline(cin, fname);
    cout << "Podaj nazwisko: ";
    getline(cin, lname);
    cout << "Podaj zawód: ";
    getline(cin, job);
}

ostream & operator<<(ostream & os,const abstr_emp & e)
{
    os << "Personalia: "<<e.fname<<" "<<e.lname;
    return os;
}


//metody klasy manager
void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    Show();
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    Set();
}

//metody chronione
void manager::Show() const
{
    cout<< "Liczba pracowników: "<<inchargeof<<endl;
}

void manager::Set()
{
    cout << "Podaj liczbę pracowników, którymi zarządza manager: ";
    cin >> inchargeof;
    while (cin.get() != '\n')
        continue;
}

//metody klasy fink
void fink::ShowAll() const
{
    abstr_emp::ShowAll();

}

void fink::SetAll()
{
    abstr_emp::SetAll();
    Set();
}

//metody chronione
void fink::Show() const
{
    cout << "Raport: "<<reportsto<<endl;
}

void fink::Set()
{
    cout << "Raport do? ";
    getline(cin, reportsto);
}

//metody klasy highfink
void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    manager::Show();
    fink::Show();
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    manager::Set();
    fink::Set();
}
