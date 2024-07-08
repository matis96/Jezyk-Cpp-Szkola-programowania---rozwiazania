// pe14_1.cpp -- używa klasy Wine korzystającez z zawierania
#include <iostream>
#include "winec.h"

int main(void)
{
    system("chcp 65001  > nul");
    using std:: cin;
    using std::cout;
    using std::endl;

    cout << "Podaj nazwę wina: ";
    char lab[50];
    cin.getline(lab, 50);
    cout << "Podaj liczbę roczników: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab, yrs); // zapisuje nazwę, liczbe roczników i przekazuje informację o
                            // tej liczbie do tablicy
    holding.GetBottles();  // pobiera dane o roczniku i liczbie butelek
    holding.Show(); // wyświetla zawartość obiektu

    const int YRS = 3;
    int y[YRS] = { 1993, 1995, 1998 };
    int b[YRS] = { 48, 60, 72 };
    // tworzy nowy obiekt, inicjalizuje za pomocą danych w tablicach y oraz b
    Wine more("Gunshing Grape Red", YRS, y, b);
    more.Show();
    cout << "Łączna liczba butelek wina " << more.Label()   // używa metody Label()
         << ": " << more.sum() << endl;     // używa metody sum()
    cout << "Koniec\n";
    return 0;
}

