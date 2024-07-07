// zad2.cpp -- wczytanie za pomoc¹ getline nie tylko pojedynczych s³ów
#include <iostream>
#include <string>
int main()
{
    setlocale(LC_CTYPE, "Polish");
    using namespace std;
    string name;
    string dessert;

    cout << "Podaj swoje imiê:\n";
    getline(cin, name);  // wczytuje dane do znaku nowego wiersza
    cout << "Podaj swój ulubiony deser:\n";
    getline(cin, dessert);
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0;
}
