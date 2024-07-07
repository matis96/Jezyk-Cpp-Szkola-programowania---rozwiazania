//zad5.cpp
#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    //std::cout << std::fixed;
    //std::cout << std::setprecision(5);
    long long world;
    long long PL;
    double percent;
    cout<<"Podaj liczbe ludnosci swiata: ";
    cin>>world;
    cout<<"Podaj liczbe ludnosci Polski: ";
    cin>>PL;
    percent = 100*(double)PL/world;
    printf("Populacja Polski stanowi %.5f%% populacji swiata.", percent);
}
