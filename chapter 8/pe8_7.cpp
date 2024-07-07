//zad7.cpp
#include <iostream>

template <typename T>            // szablon A
T SumArray(T arr[], int n);

template <typename T>            // szablon B
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

// ustawienie wskazników na pola amount struktur z tablicy Mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Wyliczanie dlugow pana E.:\n";
// things to tablica int
    cout << SumArray(things, 6)<<endl;  // uzywamy szablonu A
    cout << "Wyliczanie dlugow pana E:\n";
// pd to tablica wskazników na double
    cout << SumArray(pd, 3);      // uzywa szablonu B (bardziej wyspecjalizowanego)
    return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
    T suma = 0;
    for (int i = 0; i < n; i++)
        suma += arr[i];
    return suma;
}

template <typename T>
T SumArray(T * arr[], int n)
{
    T suma = 0;
    for (int i = 0; i < n; i++)
        suma += *arr[i];
    return suma;
}
