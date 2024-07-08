// randwalk.cpp -- test klasy Vector
// kompilować z plikiem vect.cpp
#include <iostream>
#include <cstdlib>    // prototypy funkcji rand() i srand()
#include <ctime>      // prototyp funkcji time()
#include "vect.h"

int main()
{
    setlocale(LC_CTYPE, "Polish");
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));   // inicjalizacja generatora liczb pseudolosowych
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    unsigned long N_min, N_max, N_avg;
    int N;
    cout << "Podaj ilosc prob do zbadania: ";
    cin >> N;
    //N=100;
    //cout << "Podaj dystans do przejścia: ";
    target=50;

    //cout << "Podaj długość kroku: ";
    dstep=2;
    while (result.magval() < target)
    {
        direction = rand() % 360;
        step.reset(dstep, direction, Vector::POL);
        result = result + step;
        steps++;
    }
    N_min = N_max = N_avg = steps;
    //cout<<steps<<endl;
    for (int i =1; i<N; i++)
    {
    result.reset(0,0,Vector::POL);
    steps=0;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
    //cout<<steps<<endl;
    if (N_min>steps)
        N_min = steps;
    if (N_max<steps)
        N_max = steps;
    N_avg += steps;
    }
    N_avg /=N;
    cout << "Minimalna liczba krokow dla N = "<<N<<": "<<N_min<<endl;
    cout << "Maksymalna liczba krokow dla N = "<<N<<": "<<N_max<<endl;
    cout << "Srednia liczba krokow dla N = "<<N<<": "<<N_avg<<endl;
    cout << "N teoretyczne: "<<(target/dstep)*(target/dstep)<<endl;

        /*cout << "Po " << steps << " krokach delikwent "
            "osiągnął położenie:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " czyli\n" << result << endl;
        cout << "Średnia długość kroku pozornego = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Podaj dystans do przejścia (k, aby zakończyć): ";

    cout << "Koniec!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;*/
    return 0;
}


