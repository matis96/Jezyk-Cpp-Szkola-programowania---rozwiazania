// stone.cpp -- konwersje wartoœci typów liczbowych na obiekty wlasnego typu
// kompilowaæ ze stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"

//void display(const Stonewt & st, int n);
int main()
{
    //setlocale(LC_CTYPE, "Polish");
    system("chcp 65001  > nul");
    Stonewt incognito = 275; // inicjalizacja konstruktorem
    Stonewt wolfe(285.7);    // równowa¿ne instrukcji: Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    /*cout << "Celebryta ważył "<<incognito;
    //incognito.show_stn();
    cout << "Detektyw wazyl "<<wolfe;
    cout << "Prezydent wazyl "<<taft;
    taft.setSTN();
    cout << "(STN) Prezydent wazyl "<<taft;
    taft.setLBS();
    cout << "(LBS) Prezydent wazyl "<<taft;
    taft.setLBS_F();
    cout << "(LBS_F) Prezydent wazyl "<<taft;
    wolfe.setLBS_F();
    cout << "Detektyw wazyl "<<wolfe;
    wolfe.setSTN();
    cout << "Detektyw wazyl "<<wolfe;*/
    cout << "Detektyw i prezedynet waza "<<wolfe+taft;
    cout << "incognito *5 wazy "<<5*incognito;
    cout << "Inna proba: "<<5*incognito-(wolfe+taft);

    /*incognito = 276.8;   // konwersja konstruktorem
        taft = 325;          // równowazne instrukcji: taft = Stonewt(325);
    cout << "Po obiedzie celebryta wazy ";
    incognito.show_stn();
    cout << "Po obiedzie prezydent wazy ";
    taft.show_lbs();
    display(taft, 2);
    cout << "A zapasnik wazy jeszcze wiecej.\n";
    display(427, 2);
    cout << "Nie pozostal kamien na kamieniu\n";*/
    return 0;
}

/*void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Oho! ";
        st.show_stn();
    }
}*/


