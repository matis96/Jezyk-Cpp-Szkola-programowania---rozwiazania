//zad3.cpp
#include <iostream>
using namespace std;
void showmenu();

int main()
{
    showmenu();
    char choice;
    cin >> choice;
    //cout << choice << endl;
    //cin.get();
    while (choice != 'r' && choice != 'p' && choice != 'd' && choice != 'g')
    {
        cout << "Prosze podac litere r, p, d lub g: ";
        cin >> choice;
    }
    switch(choice)
    {
        case 'r':   cout << "Zebra lubi trawe\n";
                    break;
        case 'p':   cout << "Fryderyk Chopin jest Polakiem\n";
                    break;
        case 'd':   cout << "Klon jest drzewem\n";
                    break;
        case 'g':   cout << "Zagrajmy";
                    break;
    }
}

void showmenu()
{
    cout << "r) roslinozerca    p) pianista\n"
            "d) drzewo          g) gra\n"
            "Prosze podac litere r, p, d lub g: ";
}
