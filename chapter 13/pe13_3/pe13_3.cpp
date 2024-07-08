// usedma.cpp -- dziedziczenie, funkcje zaprzyjaźnione i dynamiczny przydział pamięci
// kompilacja z plikiem dma.cpp
#include <iostream>
#include <string>
#include "dma.h"
int main()
{
    using namespace std;
    DMA *test[3];
    for (int i=0; i<3; i++)
    {
        char etykieta[20];
        int rating, choice;
        cout<<"Podaj nazwe etykietki: ";
        cin.getline(etykieta, 20);
        cout<<"Podaj ocene: ";
        cin>>rating;
        cout<<"Wybierz rodzaj DMA:\n";
        cout<<"1 - baseDMA, 2 - lacksDMA, 3 - hasDMA\n";
        cin>>choice;
        cin.get();
        switch(choice)
        {
            case 1: test[i] = new baseDMA(etykieta, rating);
            break;
            case 2: {char color[20];
            cout<<"Podaj kolor: ";
            cin.getline(color,20);
            test[i] = new lacksDMA(color, etykieta, rating);
            break;}
            case 3: {char style[20];
            cout<<"Podaj styl: ";
            cin.getline(style,20);
            test[i] = new hasDMA(style, etykieta, rating);
            break;}
            default: cout<<"Opcja domyslna, tworze obiekt baseDMA\n";
            test[i] = new baseDMA(etykieta, rating);
        }
    }
    for (int i=0; i<3; i++)
    {
        test[i]->View();
        cout<<endl;
    }


    return 0;
}
