#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "stonewt.h"

int main()
{
    setlocale(LC_CTYPE, "Polish");
    Stonewt test(11,0);
    int count=0;
    Stonewt stones[6] ={
    138, 154, 166};
    Stonewt stone_min, stone_max;
    stone_min = stone_max = stones[0];
    int i_min, i_max;
    i_min = i_max = 0;
    for (int i=3; i<6; i++)
    {
        double pounds;
        cout<<"Podaj ciezar kamienia nr "<<i+1<<": ";
        cin >> pounds;
        stones[i] =pounds;
    }

    for (int i=0; i<6; i++)
    {
        if (stones[i]>=test)
            count++;
        if (stone_min>stones[i])
        {
            stone_min = stones[i];
            i_min = i;
        }

        if (stone_max<stones[i])
        {
            stone_max = stones[i];
            i_max = i;
        }
    }
    cout<<"Indeks najmniejszego elementu: "<<i_min<<endl;
    cout<<"Indeks najwiekszego elementu: "<<i_max<<endl;
    cout<<"Ilosc elementow wiekszych lub rownych od 11 kamieni: "<<count;

}
