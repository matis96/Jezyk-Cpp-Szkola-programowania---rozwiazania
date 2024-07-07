//zad1.cpp
#include <iostream>
double harmonic(double x, double y);

int main()
{
   using namespace std;
   double x, y;
   double result;
   cout << "Podaj dwie liczby. Program zakonczy dzialanie, gdy jedna z nich bedzie rowna 0"<<endl;
   while (cin >> x >> y && (x!=0 && y!=0))
   {
        result = harmonic(x, y);
        cout << "Srednia harmoniczna wynosi: " << result << endl;
        cout << "Podaj dwie liczby" << endl;
   }
}

double harmonic(double x, double y)
{
    double av;
    av = 2.0*x*x/(x+y);
    return av;
}
