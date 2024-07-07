//zad4.cpp
#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
    setlocale(LC_CTYPE, "Polish");
    using namespace std;
    double total, choices;
    double bigNumber;
    cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz\n"
            "liczbe skreslen:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "Podaj Megaliczbe: ";
        while(!(cin >> bigNumber))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Blad! Podaj Megaliczbe: ";

        }

        cout << "Szansa wygranej to jeden do ";
        cout << probability(total, choices)*probability(bigNumber, 1);      // wyliczenie wyniku
        cout << ".\n";
        cout << "Nastepne dwie liczby (q, aby zakonczyc): ";
    }
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  // kilka zmiennych lokalnych
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}

