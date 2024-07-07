//zad3.cpp
#include <iostream>

int main()
{
    using namespace std;
    int stopnie, min, sek;
    cout<<"Podaj dlugosc w stopniach, minutach, sekundach"<<endl;
    cout<<"Najpierw podaj stopnie: ";
    cin>>stopnie;
    cout<<"Nastepnie podaj minuty stopnia luku: ";
    cin>>min;
    cout<<"Na koniec podaj sekundy luku: ";
    cin>>sek;
    float miara = stopnie + min/60.0 + sek/3600.0;
    printf("%d stopni, %d minut, %d sekund = %.4f stopni", stopnie, min, sek, miara);
}
