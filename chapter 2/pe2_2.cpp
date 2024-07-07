//zad2.cpp
#include <iostream>
int main()
{
    using namespace std;
    cout<<"Podaj odleglosc w milach morskich. ";
    double mile;
    cin>>mile;
    double metry;
    metry = mile * 1852;
    cout<<"Podana odleglosc to "<<metry<< " metrow.";
    return 0;
}
