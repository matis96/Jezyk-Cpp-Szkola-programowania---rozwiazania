//zad1.cpp
#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;
    while ((ch = cin.get())!= '@')
    {
        if (!isdigit(ch))
        {
            if(isupper(ch))
                ch = tolower(ch);
            else
                ch = toupper(ch);
            cout << ch;
        }
    }
}
