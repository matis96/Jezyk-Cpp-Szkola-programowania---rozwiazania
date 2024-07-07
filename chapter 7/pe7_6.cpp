//zad6.cpp
#include <iostream>
const int ArSize = 6;
using namespace std;
int fill_array(double [], int );
void show_array(double [], int );
void reverse_array(double [], int);
int main()
{
    double tab[ArSize];
    int values = fill_array(tab, ArSize);
    show_array(tab, values);
    reverse_array(tab, values);
}

int fill_array(double ar[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        cout << "Podaj wartosc nr " << i+1 <<": ";
        if (!(cin>>ar[i]))
            break;
    }
    return i;
}

void show_array(double ar[], int n)
{
    cout << "Wprowadzona tablica:\n";
    for (int i = 0; i<n; i++)
        cout << ar[i] <<" ";
}

void reverse_array(double ar[], int n)
{
    cout << "\nOdwrocona tablica: "<<endl;
    for (int i = n-1; i>=0; i--)
        cout << ar[i] << " ";
}


