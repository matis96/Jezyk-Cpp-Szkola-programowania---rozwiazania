//zad10.cpp
#include <iostream>
double calculate(double x, double y, double (*pf)(double , double ));
double add(double x, double y);
double mul(double x, double y);
double sub(double x, double y);
int main()
{
    using namespace std;
    double (*pf[3])(double, double) = {add, mul, sub};
    double x = 2.5; double y = 10.4;
    double q;
    for (int i =0; i<3; i++)
    {
        q=calculate(x,y,pf[i]);
        cout << q << endl;
    }
}

double calculate(double x, double y, double (*pf)(double , double ))
{
    return (*pf)(x, y);
}

double add(double x, double y)
{
    return x+y;
}

double mul(double x, double y)
{
    return x*y;
}
double sub(double x, double y)
{
    return x-y;
}
