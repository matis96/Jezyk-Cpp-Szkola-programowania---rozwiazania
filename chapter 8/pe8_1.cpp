//zad1.cpp
#include <iostream>
using namespace std;
void pokaz_napis(const char *napis, int n=0);
int main()
{
    const char *napis = "Literal testowy";
    cout<<"1"<<endl;
    pokaz_napis(napis);
    cout<<"2"<<endl;
    pokaz_napis(napis, 5);
    cout<<"3"<<endl;
    pokaz_napis(napis, -3);
    cout<<"4"<<endl;
    pokaz_napis(napis);
    cout<<"5"<<endl;
    pokaz_napis(napis, 5);
}


void pokaz_napis(const char *napis, int n)
{
    static int k =0;
    if (n!=0)
    {
        k++;
        for (int i=0; i<k; i++)
            cout << napis << endl;
    }
    else
    {
        k++;
        cout << napis << endl;
    }


}
