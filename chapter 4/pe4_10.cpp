//zad10.cpp
#include <array>
#include <iostream>

int main()
{
    using namespace std;
    array<float, 3> czas;
    float srednia;
    cout<<"Podaj 3 wyniki na 100 metrow"<<endl;
    cout<<"Podaj pierwszy czas: ";
    cin>>czas[0];
    cout<<"Podaj drugi czas: ";
    cin>>czas[1];
    cout<<"Podaj trzeci czas: ";
    cin>>czas[2];
    srednia = (czas[0]+czas[1]+czas[2])/3.0;
    cout<<"Srednia z 3 biegow to: "<<srednia;
}
