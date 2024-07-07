//zad5.cpp
#include <iostream>
double cel2fahr(int);
int main()
{
    using namespace std;
    cout<<"Podaj temperature w stopniach Celsjusza: ";
    int Cel;
    cin>>Cel;
    double Fahr;
    Fahr = cel2fahr(Cel);
    printf("%d stopnie Celsjusza to %.0f stopnie Fahrenheita.", Cel, Fahr);
}
double cel2fahr(int cel)
{
    double fahr = 1.8*cel+32.0;
    return fahr;
}
