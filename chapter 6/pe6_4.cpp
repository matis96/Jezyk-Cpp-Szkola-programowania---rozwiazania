//zad4.cpp
#include <iostream>
using namespace std;
void showmenu();
//struktura imion Zakonu Programistow Dobrej Woli
const int strsize = 40;
struct zpdw {
    char imie[strsize];         //prawdziwe imie
    char stanowisko[strsize];   //stanowisko sluzbowe
    char pseudozpdw[strsize];   //pseudonim ZPDW
    int preferencje;            //0=imie, 1= stanowisko, 2=pseudonim
};
zpdw Lista[5] = {{"Wimp Macho", "Inzynier FPGA", "Chad", 0},
           {"Raki Rhodes", "Mlodszy Programista", "Rodos", 1},
           {"Celia Laiter", "sekretarka", "MIPS", 2},
           {"Hoppy Hipman", "Szkoleniowec Analitykow", "Hip-Hop", 1},
           {"Pat Hand", "C++ Senior Developer", "Loopy", 2}
};
int main()
{
    showmenu();
    char choice;
    cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
            case 'a': for (zpdw x : Lista)
                            cout << x.imie << endl;
                      break;
            case 'b': for (zpdw x : Lista)
                            cout << x.stanowisko << endl;
                      break;
            case 'c': for (zpdw x : Lista)
                            cout << x.pseudozpdw << endl;
                      break;
            case 'd': for (zpdw x : Lista)
                        {
                            if (x.preferencje == 0)
                                cout << x.imie << endl;
                            else if (x.preferencje == 1)
                                cout << x.stanowisko << endl;
                            else
                                cout << x.pseudozpdw << endl;
                        }

                      break;
            default: cout << "Nie ma takiej opcji!"<<endl;

        }
        cout << "Wybierz jedna z opcji: ";
        cin >> choice;
    }
    cout << "Do zobaczenia!";
}


void showmenu()
{
    cout << "Zakon Programistow Dobrej Woli\n"
            "a. lista wg imion          b. lista wg stanowisk\n"
            "c. lista wg pseudonimow    d. lista wg preferencji\n"
            "q. koniec\n"
            "Wybierz jedna z opcji: ";

}
