//zad6.cpp
#include <iostream>

int main()
{
    using namespace std;

    float mile, galony;
    float spalanie;
    cout<<"Ile mil przejechales? ";
    cin>>mile;
    cout<<"Ile galonow zuzyles? ";
    cin>>galony;
    spalanie = (float)mile/(float)galony;
    printf("Na jednym galonie mozesz przejechac %.2f mil", spalanie);
    //cout<<"Na jednym galonie mozesz przejechac "<<spalanie<<" mil"<<endl;
    cout<<"czesc europejska"<<endl;
    int km, pb;
    float zuzycie;
    cout<<"Ile km przejechales? ";
    cin>>km;
    cout<<"Ile litrow benzyny zuzyles? ";
    cin>>pb;
    zuzycie = 100*(float)pb/(float)km;
    printf("Zuzycie wynosi %.2f litrow na 100 km.", zuzycie);
    //cout<<"Zuzycie wynosi "<<zuzycie<<" na 100 km.";
}
