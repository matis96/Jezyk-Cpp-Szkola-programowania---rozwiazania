//zad9.cpp
#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// Funkcja getinfo() ma dwa parametry: wskaznik pierwszego elementu tablicy
// struktur student oraz liczbe int okreslajaca liczbe elementow w tablicy.
// Funkcja pobiera i zapisuje dane o studentach. Wprowadzanie danych konczy
// sie, kiedy tablica jest pelna lub podane zostanie puste nazwisko studenta.
// Funkcja zwraca liczbe studentow wpisanych do tablicy.
int getinfo(student pa[], int n);

// Funkcja display1() pobiera jako parametr strukture student i pokazuje jej
// zawartosc.
void display1(student st);

// Funkcja display2() pobiera jako parametr adres struktury student i pokazuje
// zawartosc tej struktury.
void display2(const student * ps);


// Funkcja display3() pobiera jako parametry adres pierwszego elementu tablicy
// ze strukturami student oraz liczbe elementow w tablicy, po czym wyswietla
// zawartosc wskazanych struktur.
void display3(const student pa[], int n);

int main()
{
    cout << "Podaj wielkosc grupy: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Gotowe\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        cout << "Podaj nazwisko studenta: ";
        if (!(cin.get(pa[i].fullname, SLEN)))
            return i;
        while (cin.get() != '\n')
            continue;
        cout << "Podaj hobby studenta: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Podaj poziom znajomosci OOP w skali 1-5: ";
        cin >> pa[i].ooplevel;
        while (!cin || (pa[i].ooplevel<1 || pa[i].ooplevel>5))
        {
            cout << "Blad! Podaj poziom znajomosci studenta OOP w skali 1-5: ";
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cin >> pa[i].ooplevel;
        }
        cin.get();

    }
    return i;
}

void display1(student st)
{
    cout << "Dane studenta z funkcji display1()"<<endl;
    cout << "Nazwisko: "<<st.fullname<<endl;
    cout << "Hobby: "<<st.hobby<<endl;
    cout << "Znajomosc OOP: "<<st.ooplevel<<endl;
}

void display2(const student * ps)
{
    cout << "Dane studenta z funkcji display2()"<<endl;
    cout << "Nazwisko: "<<ps->fullname<<endl;
    cout << "Hobby: "<<ps->hobby<<endl;
    cout << "Znajomosc OOP: "<<ps->ooplevel<<endl;

}
void display3(const student pa[], int n)
{
    int i;
    cout << "Dane studenta z funkcji display3()"<<endl;
    for (i=0; i<n; i++)
    {
        cout << "Student nr "<<i+1<<endl;
        cout << "Nazwisko: "<<pa[i].fullname<<endl;
        cout << "Hobby: "<<pa[i].hobby<<endl;
        cout << "Znajomosc OOP: "<<pa[i].ooplevel<<endl;
    }
}
