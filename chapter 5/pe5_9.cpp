//zad9.cpp
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int suma = 0;
    string ps;
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")"<<endl;
    cin >> ps;
    while(ps != "gotowe")
    {
        cin >> ps;
        suma++;
    }
    cout << "Podano "<<suma <<" slow.";
}
