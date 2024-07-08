// stacker.cpp -- test klasy Stack
#include <iostream>
#include <cctype>                // albo ctype.h
#include "stack.h"
int main()
{
    setlocale(LC_CTYPE, "Polish");
    using namespace std;
    Stack st;                    // tworzy pusty stos
    char ch;
    customer po;
    double payment_sum = 0.0;
    cout << "Naciśnij D, aby wprowadzić klienta, \n"
        << "P, aby obsluzyc klienta, lub K, aby zakończyć.\n";
    while (cin >> ch && toupper(ch) != 'K')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'D':
            case 'd': cout << "Podaj nazwisko nowego klienta: ";
                      cin >> po.fullname;
                      cout << "Podaj naleznosc klienta: ";
                      cin >> po.payment;
                      payment_sum += po.payment;
                      if (st.isfull())
                          cout << "Stos pełen!\n";
                      else
                          st.push(po);
                      cout << "Suma zadluzen wynosi: "<<payment_sum<<endl;
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "Stos pusty!\n";
                      else {
                          st.pop(po);
                          cout << "Klient " << po.fullname << " obsluzony\n";
                          payment_sum -= po.payment;
                          cout<< "Suma zadluzen wynosi: "<<payment_sum<<endl;
                      }
                      break;
        }
        cout << "Naciśnij D, aby wprowadzić klienta, \n"
            << "P, aby obsluzyc, lub K, aby zakończyć.\n";
    }
    cout << "Aktualna suma zadluzen: "<<payment_sum<<endl;
    cout << "Fajrant!\n";
    return 0;
}
