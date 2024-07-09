//zad2.cpp
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void fix_string(string & );
bool isPalindrom(string &);
int main()
{
    cout << "Podaj lancuch, aby sprawdzic czy jest palindromem (koniec, aby zakonczyc):\n";
    string input;
    while (getline(cin, input) && input != "koniec")
    {
        fix_string(input);
        if (isPalindrom(input))
            cout<<"palindrom\n";
        else
            cout<<"fail\n";
    }
}

void fix_string(string & st)
{
    for (auto it = st.begin(); it != st.end(); it++)
    {
        *it = tolower(*it);
        if (isblank(*it))
            st.erase(it);
    }
}

bool isPalindrom(string & st)
{
    int begin = 0;
    int end = st.size()-1;
    while (begin<end)
        if (st[begin++] != st[end--])
            return false;
    return true;
}

