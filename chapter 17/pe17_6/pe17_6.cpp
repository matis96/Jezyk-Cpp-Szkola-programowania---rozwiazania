#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "emp.h"

void Menu();

const char * file = "pracownicy.txt";
const int MAX = 10;
int main()
{
    //system("chcp 65001  > nul");
    using namespace std;
    char ch;
    abstr_emp * pc[MAX];
    int i = 0;
    int classtype;
    // pokaż początkową zawartość
    ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        cout << "Oto aktualna zawartosc pliku "
            << file << ":\n";
        while((fin >> classtype).get(ch)){ // znak nowego wiersza oddziela wartosc calkowita od danych
            switch(classtype) {
            case Employee : pc[i] = new employee;
                            pc[i++]->getall(fin);
                            break;
            case Manager  : pc[i] = new manager;
                            pc[i++]->getall(fin);
                            break;
            case Fink     : pc[i] = new fink;
                            pc[i++]->getall(fin);
                            break;
            case Highfink : pc[i] = new highfink;
                            pc[i++]->getall(fin);
                            break;
                            }
            }
        for (int j = 0; j<i; j++)
            pc[j]->ShowAll();
        fin.close();
        }

    int index = i;
    ofstream fout(file, ios_base::out | ios_base::app);
    if (!fout.is_open())
    {
        cerr << "Nie mozna otworzyc pliku " << file << " do zapisu.\n";
        exit(EXIT_FAILURE);
    }

    Menu();

    while((cin>>classtype).get(ch)&& (classtype >= 1 && classtype <=4) && i<10){
        switch(classtype){
            case Employee : pc[i] = new employee;
                            pc[i++]->SetAll();
                            break;
            case Manager  : pc[i] = new manager;
                            pc[i++]->SetAll();
                            break;
            case Fink     : pc[i] = new fink;
                            pc[i++]->SetAll();
                            break;
            case Highfink : pc[i] = new highfink;
                            pc[i++]->SetAll();
                            break;
                            }
            if (i<10)
                cout<<"Podaj kategorie pracownika (1-4): "<<endl;
    }

    for (int j = index; j < i; j++)
        pc[j]->writeall(fout);
    fout.close();

    i = 0;

    fin.open(file);
    if (fin.is_open())
    {
        cout << "Oto nowa zawartosc pliku "
            << file << ":\n";
        while((fin >> classtype).get(ch)){ // znak nowego wiersza oddziela wartosc calkowita od danych
            switch(classtype) {
            case Employee : pc[i] = new employee;
                            pc[i++]->getall(fin);
                            break;
            case Manager  : pc[i] = new manager;
                            pc[i++]->getall(fin);
                            break;
            case Fink     : pc[i] = new fink;
                            pc[i++]->getall(fin);
                            break;
            case Highfink : pc[i] = new highfink;
                            pc[i++]->getall(fin);
                            break;
                            }
            }
        fin.close();
    }
    for (int j = 0; j<i; j++)
        pc[j]->ShowAll();
    cout << "Koniec.\n";
    return 0;
}

void Menu()
{
    using namespace std;
    cout<<"Podaj kategorie pracownika: "<<endl;
    cout<<"1) Employee  2) Manager"<<endl;
    cout<<"3) Fink      4) HighFink"<<endl;
    cout<<"5) koniec"<<endl;
}
