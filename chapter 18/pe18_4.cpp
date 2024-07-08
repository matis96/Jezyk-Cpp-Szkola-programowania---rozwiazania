#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>


int main()
{
    //system("chcp 65001  > nul");
    using std::list;
    using std::cout;
    using std::endl;
    auto outint = [](int x) { std::cout << x << " "; };

    //TooBig<int> f100(100); // ograniczenie = 100

    //int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    //list<int> yadayada; (vals, vals + 10);
    //list<int> etcetera; (vals, vals + 10);
    // w C++11 można alternatywnie użyć:
     list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
     list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    cout << "Oryginalne listy:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    yadayada.remove_if([](int x) {return x>100;});             // używa nazwanego obiektu funkcyjnego
    etcetera.remove_if([] (int x) {return x>200;}); // tworzy obiekt funkcyjny
    cout << "Przyciete listy:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;

    return 0;
}
