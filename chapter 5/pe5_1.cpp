//zad1.cpp
#include <iostream>

int main()
{
    using namespace std;
    int l1, l2;
    int suma = 0;
    cout << "Podaj dwie rozne liczby calkowite" << endl;
    cout << "Niech pierwsza bedzie mniejsza" << endl;
    cout << "Program wyliczy sume wszystkich l. calkowitych pomiedzy podanymi liczbami" << endl;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> l1;
    cout << "Podaj druga liczbe" << endl;
    cin >> l2;
    for (int i = l1; i <=l2; i++)
        suma += i;
    cout << "Suma wynosi: " << suma;
}
