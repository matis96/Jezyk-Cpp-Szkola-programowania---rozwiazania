//zad7.cpp
#include <iostream>

struct pizza_Wingate{
    char firma[40];
    float srednica;
    float waga;
    };

int main()
{
    using namespace std;
    pizza_Wingate pizza;
    cout<<"Kto produkuje pizze? ";
    cin.getline(pizza.firma, 40);
    cout<<"Srednica? ";
    cin>>pizza.srednica;
    cout<<"waga? ";
    cin>>pizza.waga;
    cout<<"Firma: "<<pizza.firma<<endl;
    cout<<"Srednica: "<<pizza.srednica<<endl;
    cout<<"Waga: "<<pizza.waga<<endl;
}
