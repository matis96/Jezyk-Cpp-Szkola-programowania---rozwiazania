//zad2.cpp
#include <iostream>

const int ArSize = 10;
int golf_setup(int [], int);
void display(int [], int);
double average(int [], int);
using namespace std;
int main()
{
   int wyniki[ArSize];
   double av;   //srednia wynikow
   int real;    //ilosc wprowadzonych wynikow
   real = golf_setup(wyniki, ArSize);
   display(wyniki, real);
    av = average(wyniki, real);
    cout << "Srednia wynikow wynosi: "<<av;

}
int golf_setup(int score[], int n)
{
    cout << "Podaj do 10 wynikow golfowych. Wprowadz 'q' aby zakonczyc"<<endl;
    int i = 0;
    cout << "Podaj wynik nr 1: ";
    while (cin >> score[i++] && i<n)
        cout << "Podaj wynik nr "<< i+1 <<": ";
    return i;
}
void display(int score[], int n)
{
    int i;
    for (i=0; i<n; i++)
        cout<<score[i]<<" ";
    cout << endl;
}
double average(int score[], int n)
{
    double av = 0;
    for (int i =0; i<n; i++)
        av += score[i];
    av /= n;
    return av;
}
