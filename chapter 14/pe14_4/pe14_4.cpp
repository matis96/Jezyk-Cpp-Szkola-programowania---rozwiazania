#include <iostream>
#include <cstring>
#include "person.h"
const int SIZE = 5;

int main()
{
    system("chcp 65001  > nul");
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Person * lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Podaj kategorię Osoby z Dzikiego Zachodu:\n"
            << "r: rewolwerowiec  p: pokerzysta  "
            << "b: BadDude  w: wyjście\n";
        cin >> choice;
        while (strchr("rpbw", choice) == NULL)
        {
            cout << "Wpisz k, p, s lub w: ";
            cin >> choice;
        }
        if (choice == 'w')
            break;
        switch(choice)
        {
            case 'r': lolas[ct] = new Gunslinger;
                      break;
            case 'p': lolas[ct] = new PokerPlayer;
                      break;
            case 'b': lolas[ct] = new BadDude;
                      break;
        }
        cin.get();
        lolas[ct]->Set();
    }
    cout << "\nLista Poszukiwanych:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete lolas[i];
    cout << "Koniec.\n";

}
