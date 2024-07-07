#include <iostream>
#include "zad4.h"

namespace SALES
{
    using namespace std;
    void setSales(Sales & s, const double ar[], int n)
    {
        for (int i =0; i<QUARTERS; i++)
            s.sales[i] = 0;
        double total = 0;
        double min_ar, max_ar;
        max_ar = min_ar = ar[0];
        for (int i=0; i<n; i++)
        {
            s.sales[i] = ar[i];
            total += ar[i];
            if (max_ar < ar[i])
                max_ar = ar[i];
            if (min_ar > ar[i])
                min_ar = ar[i];
        }

        s.average = total/n;
        s.max = max_ar;
        s.min = min_ar;
    }
    void setSales(Sales & s)
    {
        for (int i =0 ; i<QUARTERS; i++)
        {
            cout << "Podaj wyniki sprzedazy dla kwartalu #"<<i+1<<": ";
            cin>>s.sales[i];
        }
        double total = s.sales[0];
        double max_sales, min_sales;
        max_sales = min_sales = s.sales[0];
        for (int i =1 ; i<QUARTERS; i++)
        {
            total += s.sales[i];
            if (max_sales < s.sales[i])
                max_sales = s.sales[i];
            if (min_sales > s.sales[i])
                min_sales = s.sales[i];
        }
        s.average = total/QUARTERS;
        s.max = max_sales;
        s.min = min_sales;
    }
    void showSales(const Sales & s)
    {
        cout<<"Sprzedaz kwartalna: ";
        for (int i =0; i<QUARTERS-1; i++)
            cout<<s.sales[i]<<", ";
        cout<<s.sales[3]<<endl;
        cout<<"Sprzedaz srednia: "<<s.average<<endl;
        cout<<"Najmniejsza sprzedaz: "<<s.min<<endl;
        cout<<"Najwieksza sprzedaz: "<<s.max<<endl;
    }
}
