#include <iostream>
#include "list.h"
void show(Item &);
void plus10(Item &);
using namespace std;

int main()
{

    List test;
    if (test.isempty())
        cout<<"Lista jest teraz pusta"<<endl;
    test.add(2347);
    test.add(1578);
    test.add(62);
    test.add(1896);
    if (test.isfull())
        cout<< "Lista jest teraz pelna"<<endl;
    test.visit(show);
    test.visit(plus10);

}

void show(Item & item)
{
    cout<<item<<endl;
}

void plus10(Item & item)
{
    cout<<item+10<<endl;
}
