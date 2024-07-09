#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(string &);
int main()
{
    //string test = "kajak";
    cout << "Podaj lancuch, aby sprawdzic czy jest palindromem (koniec, aby zakonczyc):\n";
    string input;
    while (getline(cin, input) && input != "koniec")
        if (isPalindrom(input))
            cout<<"palindrom\n";
        else
            cout<<"fail\n";
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
