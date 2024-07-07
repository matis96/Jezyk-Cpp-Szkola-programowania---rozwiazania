//zad8.cpp
#include <iostream>

struct pizza_Wingate{
    char firma[40];
    float srednica;
    float waga;
    };

int main()
{
    using namespace std;
    pizza_Wingate * pizza = new pizza_Wingate;
    cout<<"Srednica? ";
    cin>>pizza->srednica;
    cin.get();
    cout<<"Kto produkuje pizze? ";
    cin.getline(pizza->firma, 40);
    cout<<"waga? ";
    cin>>pizza->waga;
    cout<<"Firma: "<<pizza->firma<<endl;
    cout<<"Srednica: "<<pizza->srednica<<endl;
    cout<<"Waga: "<<pizza->waga<<endl;
}
