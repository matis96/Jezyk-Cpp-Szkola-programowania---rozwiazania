#include "emp.h"
using namespace std;

//metody klasy abstr_emp
abstr_emp::~abstr_emp()
{

}

void abstr_emp::ShowAll() const
{
    cout << "Imie: "<<fname<<endl;
    cout << "Nazwisko: "<<lname<<endl;
    cout << "Zawod: "<<job<<endl;
}

void abstr_emp::SetAll()
{
    cout << "Podaj imie: ";
    getline(cin, fname);
    cout << "Podaj nazwisko: ";
    getline(cin, lname);
    cout << "Podaj zawod: ";
    getline(cin, job);
}

void abstr_emp::getall(istream & fin)
{
    getline(fin, fname);
    getline(fin, lname);
    getline(fin, job);
}

void abstr_emp::writeall(ostream & fout) const
{
    fout<<fname<<endl;
    fout<<lname<<endl;
    fout<<job<<endl;
}

ostream & operator<<(ostream & os,const abstr_emp & e)
{
    os << "Personalia: "<<e.fname<<" "<<e.lname;
    return os;
}

//metody klasy employee
void employee::writeall(ostream & fout) const
{
    fout<<1<<endl;
    abstr_emp::writeall(fout);
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
void manager::getall(istream & fin)
{
    abstr_emp::getall(fin);
    Get(fin);
}

void manager::writeall(std::ostream & fout) const
{
    fout<<2<<endl;
    abstr_emp::writeall(fout);
    Write(fout);
}
//metody chronione
void manager::Show() const
{
    cout<< "Liczba pracownikow: "<<inchargeof<<endl;
}

void manager::Set()
{
    cout << "Podaj liczbe pracownikow, ktorymi zarzadza manager: ";
    cin >> inchargeof;
    while (cin.get() != '\n')
        continue;
}

void manager::Get(istream & fin)
{
    (fin>>inchargeof).get();
}

void manager::Write(ostream & fout) const
{
    fout<<inchargeof<<endl;
}

//metody klasy fink
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    Show();
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    Set();
}
void fink::getall(istream & fin)
{
    abstr_emp::getall(fin);
    Get(fin);
}

void fink::writeall(ostream & fout) const
{
    fout<<3<<endl;
    abstr_emp::writeall(fout);
    Write(fout);
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

void fink::Get(istream & fin)
{
    getline(fin, reportsto);
}

void fink::Write(ostream & fout) const
{
    fout<<reportsto<<endl;
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
void highfink::getall(istream & fin)
{
    abstr_emp::getall(fin);
    manager::Get(fin);
    fink::Get(fin);
}

void highfink::writeall(ostream & fout) const
{
    fout<<4<<endl;
    abstr_emp::writeall(fout);
    manager::Write(fout);
    fink::Write(fout);
}
