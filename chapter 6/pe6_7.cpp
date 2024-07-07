//zad7.cpp
#include <iostream>
#include <cctype>
#include <string>
int main()
{
    using namespace std;
    int samogloska, spogloska, nic;
    char ch;
    samogloska = spogloska = nic =0;
    string test;
    cout << "Podawaj slowa (pojedyncze q konczy):"<<endl;
    while (cin >> test && test != "q")
    {
        ch = test[0];
        if (isalpha(ch))
        {
            ch = tolower(ch);
            switch(ch)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'y': samogloska ++; break;
                default : spogloska++;
            }
        }
        else
            nic++;
    }
    cout << spogloska << " slow zaczyna sie od spoglosek."<<endl;
    cout << samogloska << " slow zaczyna sie od samoglosek."<<endl;
    cout << nic << " nie zalicza sie do zadnej z tych kategorii.";
}
