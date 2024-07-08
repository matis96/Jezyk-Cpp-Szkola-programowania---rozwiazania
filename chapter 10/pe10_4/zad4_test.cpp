#include <iostream>
#include "zad4.h"

int main()
{
    using namespace SALES;
    using namespace std;
    double test1a[QUARTERS] = {25.18, 33.19, 10.81, 22.84};
    double test1b[] = {34.87, 45.67, 18.69};
    Sales S1a(test1a, QUARTERS);
    Sales S1b(test1b, 3);
    Sales S2;
    S1a.showSales();
    cout<<"##############"<<endl;
    S1b.showSales();
    cout<<"##############"<<endl;
    S2.setSales();
    S2.showSales();
}

