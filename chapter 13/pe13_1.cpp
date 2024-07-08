#include <iostream>
using namespace std;
#include "classic.h"    // który zawiera #include cd.h
void Bravo(const Cd & disk);
int main()
{
    system("chcp 65001  > nul");
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Sonata fortepianowa B-dur, Fantazja C-moll", "Alfred Brendel", "Philips", 2, 57.17);

    Cd *pcd = &c1;

    cout << "Bezpośrednie użycie obiektu:\n";
    c1.Report();    // używa metody klasy Cd
    c2.Report();    // używa metody klasy Classic

    cout << "Użycie wskaźnika na typ Cd:\n";
    pcd->Report();  // używa metody klasy Cd dla obiektu tej klasy
    pcd = &c2;
    pcd->Report();  // używa metody klasy Classic dla obiektu tej klasy

    cout << "Wywoływanie funkcji z argumentem w postaci referencji do typu Cd:\n";
    Bravo(c1);
    Bravo(c2);

    cout << "Test przypisania: \n";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd & disk)
{
    disk.Report();
}
