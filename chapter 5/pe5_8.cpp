//zad8.cpp
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    int suma = 0;
    char ps[20];
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")"<<endl;
    cin >> ps;
    while(strcmp(ps,"gotowe"))
    {
        cin >> ps;
        suma++;
    }
    cout << "Podano "<<suma <<" slow.";
}
