//zad7.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
vector<int> Lotto(int, int);
int main()
{
    std::srand ( unsigned ( std::time(0) ) );
    vector<int> winners;
    winners = Lotto(51, 6);
    for (int i =0; i<6; i++)
        cout<<winners[i]<<" ";
}

vector<int> Lotto(int k, int n)
{
    vector<int> lotto;
    for (int i =1; i<=k; i++)
        lotto.push_back(i);
    random_shuffle(lotto.begin(), lotto.end());
    lotto.erase(lotto.begin()+n, lotto.end());
    return lotto;
}
