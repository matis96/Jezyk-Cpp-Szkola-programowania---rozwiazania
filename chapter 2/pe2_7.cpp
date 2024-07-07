//zad7.cpp
#include <iostream>
void czas(int, int);
int main()
{
    using namespace std;
    int h;
    cout<<"Podaj liczbe godzin: ";
    cin>>h;
    int min;
    cout<<"Podaj liczbe minut: ";
    cin>>min;
    czas(h, min);
}

void czas(int h, int min)
{
    printf("Czas: %d:%d",h, min);
}
