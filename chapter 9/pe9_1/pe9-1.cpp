#include "golf.h"
#include <iostream>
const int N = 5;
int main()
{
    using namespace std;
    int i=0;
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    handicap(ann, 30);
    showgolf(ann);
    golf andy;
    setgolf(andy);
    showgolf(andy);
    golf players[N];
    while(i<N && setgolf(players[i]))
        i++;
    for (int k=0; k<i; k++)
        showgolf(players[k]);

}
