//zad4.cpp
#include <iostream>
using namespace std;
#include <cstring>  // dla strlen(), strcpy()
struct stringy {
    char * str;     // wskazuje lancuch
    int ct;         // dlugosc lancucha (bez '\0')
};


// tutaj prototypy set(), show(), i show()
void set(stringy &, const char *);
void show(const stringy &, int n=1);
void show(const char *, int n =1);
int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";

    set(beany, testing);    // pierwszy parametr jako referencja,
                            // alokacja pamieci na wynik sprawdzania,
                            // ustawienie pola str struktury beany tak, by wskazywala nowy blok;
                            // kopiowanie testing do nowego bloku,
                            // ustawienie pola ct zmiennej beany
    show(beany);            // pokazuje napis z pola raz
    show(beany, 2);         // pokazuje napis z pola dwukrotnie
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);          // pokazuje lancuch testing raz
    show(testing, 3);        // pokazuje lancuch testing trzykrotnie
    show("Gotowe!");
    return 0;
}

void set(stringy &Pstringy, const char *Pchar)
{
    int i = strlen(Pchar);
    char * ps = new char[i+1];
    strcpy(ps, Pchar);
    Pstringy.str = ps;
    Pstringy.ct = i;
}

void show(const stringy &Pstringy, int n)
{
    for (int i=0; i<n; i++)
        cout<<Pstringy.str<<endl;
}

void show(const char *tekst, int n)
{
    for (int i = 0; i<n; i++)
        cout<<tekst<<endl;
}
