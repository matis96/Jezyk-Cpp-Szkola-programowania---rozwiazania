#include "winec.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), PairArray(ArrayInt(y), ArrayInt(y)), years(y)
{
    for (int i=0; i<y; i++)
    {
        first()[i]=yr[i];
        second()[i]=bot[i];
    }
}

Wine::Wine(const char * l, int y) : std::string(l), PairArray(ArrayInt(y), ArrayInt(y)), years(y)
{

}

void Wine::GetBottles()
{
    std::cout<<"Podaj dane o winie " << Label() << " dla " << years << " roczników:\n";
    for (int i=0; i<years; i++)
    {
        std::cout<<"Podaj rocznik: ";
        std::cin>>first()[i];
        std::cout<<"Podaj liczbę butelek: ";
        std::cin>>second()[i];
    }
}

int Wine::sum() const
{
    int sum = 0;
    for (int i=0; i<years; i++)
        sum +=second()[i];
    return sum;
}

void Wine::Show() const
{
    std::cout<<"Wino: "<<Label()<<std::endl;
    std::cout<<"\tRocznik\tButelki\n";
    for (int i =0; i<years; i++)
    {
        std::cout<<'\t'<<first()[i]<<'\t'<<second()[i]<<std::endl;
    }

}

