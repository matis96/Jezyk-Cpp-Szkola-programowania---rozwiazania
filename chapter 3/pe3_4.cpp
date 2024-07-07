//zad4.cpp
#include <iostream>

int main()
{
    using namespace std;
    long long sek2, sek;
    const int min2sek = 60;
    const int h2sek = min2sek *60;
    const int day2sek = h2sek*24;
    cout<<"Podaj liczbe sekund: ";
    cin>>sek2;
    sek = sek2;
    int dzien, h, min;
    dzien = sek / day2sek;
    sek -= dzien * day2sek;
    h = sek/h2sek;
    sek -= h*h2sek;
    min = sek/min2sek;
    sek -= min*min2sek;
    printf("%d sekund = %d dni, %d godzin, %d minut, %d sekund", sek2, dzien, h, min, sek);

}
