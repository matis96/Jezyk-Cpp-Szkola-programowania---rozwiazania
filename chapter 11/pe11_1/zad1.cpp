#include <iostream>
#include <cstdlib>    // prototypy funkcji rand() i srand()
#include <ctime>      // prototyp funkcji time()
#include <fstream>
#include "vect.h"

int main()
{
    setlocale(LC_CTYPE, "Polish");
    using namespace std;
    ofstream fout;
    fout.open("marsz.txt");
    using VECTOR::Vector;
    srand(time(0));   // inicjalizacja generatora liczb pseudolosowych
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
    while (cin >> target)
    {
        cout << "Podaj długość kroku: ";
        if (!(cin >> dstep))
            break;
        fout << "Dystans do przejscia: "<<target<<", dlugosc kroku: "<<dstep<<endl;
        fout<<steps<<": "<<result<<endl;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            fout<<steps<<": "<<result<<endl;
        }
        fout << "Po " << steps << " krokach delikwent "
            "osiągnął położenie:\n";
        fout << result << endl;
        result.polar_mode();
        fout << "czyli\n" << result << endl;
        fout << "Średnia długość kroku pozornego = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
    }
    cout << "Koniec!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
