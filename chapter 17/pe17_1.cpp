//pe17_1.cpp

#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int n = 0;
    while (cin.peek() != '$')
    {
        n++;
        cin.get(ch);
    }
    cout<< "Wprowadzono "<<n<<" znakow";
}
