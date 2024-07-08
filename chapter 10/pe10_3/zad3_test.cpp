#include "zad3.h"
#include <iostream>
const int N = 5;
int main()
{
    using namespace std;
    int i=0;
    golf ann("Ann Birdfree", 24);
    ann.showgolf();
    ann.handicap_set(30);
    ann.showgolf();
    golf andy;
    andy.setgolf();
    andy.showgolf();
    golf players[N];
    while(i<N && players[i].setgolf())
        i++;
    for (int k=0; k<i; k++)
        players[k].showgolf();

}
