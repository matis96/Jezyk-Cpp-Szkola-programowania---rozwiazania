//zad5.cpp
#include <iostream>
#define PROG1 5000
#define PROG2 10000
#define PROG3 20000
#define PROG4 35000
int main()
{
    using namespace std;
    double twarp;
    double podatek;
    cout << "Podaj swoje zarobki: ";
    while (cin >> twarp && twarp > 0)
    {
        if (twarp > PROG3)
            podatek = PROG2 * 0.1 + PROG3 * 0.15 + (twarp - (PROG1+PROG2+PROG3)) * 0.2;
        else if (twarp > PROG2)
            podatek = PROG2 * 0.1 + (twarp - (PROG1+PROG2))* 0.15;
        else if (twarp > PROG1)
            podatek = (twarp - PROG1) * 0.1;
        else
            podatek = 0;
        cout << "Nalezy sie podatek w wysokosci: "<<podatek<<endl;
        cout << "Podaj swoje zarobki: ";
    }
}
