//zad3.cpp

#include <iostream>
#include <cstring>
#include <new>
const int N = 2;
const int BUF = 256;
char buffer[BUF];
struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    using namespace std;
    chaff *ps;
    //wariant 1
    ps = new (buffer) chaff[N];
    strcpy(ps[0].dross, "martenowski");
    ps[0].slag=120;
    strcpy(ps[1].dross, "tomasowski");
    ps[1].slag = 68;
    for (int i =0; i<N; i++)
        cout<<ps[i].dross<<", "<<ps[i].slag<<endl;
    //wariant 2
    chaff *ps2;
    ps2 = new chaff[N];
    strcpy(ps2[0].dross, "grzybowski");
    ps2[0].slag=69;
    strcpy(ps2[1].dross, "poninski");
    ps2[1].slag = 70;
    for (int i =0; i<N; i++)
        cout<<ps2[i].dross<<", "<<ps2[i].slag<<endl;
    delete [] ps2;
}

