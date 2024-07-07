//zad8b.cpp
#include <iostream>
const int Seasons = 4;
const char *Snames[Seasons] = {"Wiosna", "Lato", "Jesien", "Zima"};
struct expenses{
    double wydatki[Seasons];
};
void fill(expenses *);
void show(expenses);
int main()
{

    expenses MojeWydatki;
    fill(&MojeWydatki);
    show(MojeWydatki);
}

void fill(expenses *Wydatki)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> Wydatki->wydatki[i];
    }
}
void show(expenses Wydatki)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << Wydatki.wydatki[i] << " zl" << endl;
        total += Wydatki.wydatki[i];
    }
    cout << "Lacznie wydatki roczne: " << total << " zl " << endl;
}
