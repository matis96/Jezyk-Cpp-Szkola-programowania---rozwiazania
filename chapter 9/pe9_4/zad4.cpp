#include <iostream>
#include "zad4.h"

int main()
{
    using namespace SALES;
    using namespace std;
    double test1a[QUARTERS] = {25.18, 33.19, 10.81, 22.84};
    double test1b[] = {34.87, 45.67, 18.69};
    Sales S1a, S1b, S2;
    setSales(S1a, test1a, QUARTERS);
    showSales(S1a);
    cout<<"##############"<<endl;
    setSales(S1b, test1b, 3);
    showSales(S1b);
    cout<<"##############"<<endl;
    setSales(S2);
    showSales(S2);
}
