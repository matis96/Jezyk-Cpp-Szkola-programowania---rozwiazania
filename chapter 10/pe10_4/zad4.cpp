#include <iostream>
#include "zad4.h"

namespace SALES
{
    using namespace std;
    Sales::Sales()
    {
        for (int i =0; i<QUARTERS; i++)
            sales[i] = 0;
        average = 0.0;
        max = 0.0;
        min = 0.0;
    }
    Sales::Sales(const double ar[], int n)
    {
        for (int i =0; i<QUARTERS; i++)
            sales[i] = 0;
        double total = 0;
        double min_ar, max_ar;
        max_ar = min_ar = ar[0];
        for (int i=0; i<n; i++)
        {
            sales[i] = ar[i];
            total += ar[i];
            if (max_ar < ar[i])
                max_ar = ar[i];
            if (min_ar > ar[i])
                min_ar = ar[i];
        }

        average = total/n;
        max = max_ar;
        min = min_ar;
    }
    void Sales::setSales()
    {
        for (int i =0 ; i<QUARTERS; i++)
        {
            cout << "Podaj wyniki sprzedazy dla kwartalu #"<<i+1<<": ";
            cin>>sales[i];
        }
        double total = sales[0];
        double max_sales, min_sales;
        max_sales = min_sales = sales[0];
        for (int i =1 ; i<QUARTERS; i++)
        {
            total += sales[i];
            if (max_sales < sales[i])
                max_sales = sales[i];
            if (min_sales > sales[i])
                min_sales = sales[i];
        }
        average = total/QUARTERS;
        max = max_sales;
        min = min_sales;
    }
    void Sales::showSales() const
    {
        cout<<"Sprzedaz kwartalna: ";
        for (int i =0; i<QUARTERS-1; i++)
            cout<<sales[i]<<", ";
        cout<<sales[3]<<endl;
        cout<<"Sprzedaz srednia: "<<average<<endl;
        cout<<"Najmniejsza sprzedaz: "<<min<<endl;
        cout<<"Najwieksza sprzedaz: "<<max<<endl;
    }
}
