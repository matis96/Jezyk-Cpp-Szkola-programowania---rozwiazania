//zad7.cpp
#include <iostream>
const int Max = 5;
double * fill_array(double *, double *);
void show_array(const double *start, const double *stop);
void revalue(double r, double *start, double *stop);

int main()
{
    using namespace std;
    double properties[Max];
    double * stop;
    stop = fill_array(properties, properties + Max);
    show_array(properties, stop);
    if (stop>properties)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while (!(cin >> factor)) // nieliczbowa wartosc na wejsciu
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartosc; podaj liczbe: ";
        }
        revalue(factor, properties, stop);
        show_array(properties, stop);
    }
    cout << "Gotowe.\n";
    //cin.get();
    //cin.get();
    return 0;
}

double * fill_array(double * start,double * stop)
{
    using namespace std;
    double *pt;
    double temp;
    int i;
    for (pt = start; pt != stop; pt++)
    {
        cout << "Podaj wartosc nr " << (i++ + 1) << ": ";
        cin >> temp;
        if (!cin)    // bledne dane
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bledne dane, wprowadzanie danych przerwane.\n";
           i--;
           break;
        }
        else if (temp < 0)     // nakaz zakonczenia
        {
            i--;
            break;
        }

        *pt = temp;
    }
    return start+i;
}

void show_array(const double *start, const double *stop)
{
   using namespace std;
   const double * pt;
   int i =0;
   for (pt = start; pt != stop; pt++)
   {
        cout << "Nieruchomosc nr " << (i++ + 1) << ": ";
        cout << *pt << endl;
   }
}

void revalue(double r, double * start, double * stop)
{
    double * pt;
    for (pt = start; pt!=stop; pt++)
        *pt *= r;
}

