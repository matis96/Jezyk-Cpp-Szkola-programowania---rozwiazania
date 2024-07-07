//zad6.cpp
#include <iostream>
double rok_sw2ja(double);
int main()
{
    using namespace std;
    cout<<"Podaj liczbe lat swietlnych: ";
    double lata;
    cin>>lata;
    double ja;
    ja = rok_sw2ja(lata);
    printf("%.1f lat swietlnych = %.0f jednostek astronomicznych.", lata, ja);
}
double rok_sw2ja(double rok_sw)
{
    double ja;
    ja = 63240*rok_sw;
    return ja;
}
