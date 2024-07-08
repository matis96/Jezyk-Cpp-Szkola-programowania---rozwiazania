#include <iostream>
#include "zad2.h"

int main()
{
    Person one;                         // wywolanie konstruktora domyslnego (#1)
    Person two("Staszek");              // wywolanie #2, z jednym argumentem domyslnym
    Person three("Jacek", "Placek");    // wywlanie #2, bez argumentow domyslnych
    one.Show();
    cout << endl;
    one.FormalShow();
    cout<<endl;
    two.Show();
    cout << endl;
    two.FormalShow();
    cout<<endl;
    three.Show();
    cout << endl;
    three.FormalShow();
    cout<<endl;
}
