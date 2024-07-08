// workmi.cpp -- dziedziczenie wielokrotne
// kompilacja z plikiem workermi.cpp
#include <iostream>
#include <cstring>
#include "C:\...\workermi.h"	//sciezka do workermi.h
#include "queueTP.h"
const int SIZE = 5;

int main()
{
system("chcp 65001  > nul");
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    //Worker * lolas[SIZE];
    QueueTp<Worker *> lolas(SIZE);
    Worker * temp;
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Podaj kategorię pracownika:\n"
            << "k: kelner  p:piosenkarz  "
            << "s: śpiewający kelner  w:wyjście\n";
        cin >> choice;
        while (strchr("kpsw", choice) == NULL)
        {
            cout << "Wpisz k, p, s lub w: ";
            cin >> choice;
        }
        if (choice == 'w')
            break;
        switch(choice)
        {
            case 'k': temp = new Waiter;
                      break;
            case 'p': temp = new Singer;
                      break;
            case 's': temp = new SingingWaiter;
                      break;
        }
        cin.get();
        temp->Set();
        lolas.enqueue(temp);
    }

    cout << "\nLista pracowników:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas.dequeue(temp);
        temp->Show();
    }
    //for (i = 0; i < ct; i++)
        //delete lolas[i];
    cout << "Koniec.\n";
    return 0;
}
