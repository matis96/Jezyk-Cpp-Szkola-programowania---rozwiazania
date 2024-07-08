#include "winec.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : label(l), years(y), data(ArrayInt(y), ArrayInt(y))
{
    for (int i=0; i<y; i++)
    {
        data.first()[i]=yr[i];
        data.second()[i]=bot[i];
    }
}

Wine::Wine(const char * l, int y) : label(l), years(y), data(ArrayInt(y), ArrayInt(y))
{

}

void Wine::GetBottles()
{
    std::cout<<"Podaj dane o winie " << label << " dla " << years << " roczników:\n";
    for (int i=0; i<years; i++)
    {
        std::cout<<"Podaj rocznik: ";
        std::cin>>data.first()[i];
        std::cout<<"Podaj liczbę butelek: ";
        std::cin>>data.second()[i];
    }
}

int Wine::sum() const
{
    int sum = 0;
    for (int i=0; i<years; i++)
        sum +=data.second()[i];
    return sum;
}

void Wine::Show() const
{
    std::cout<<"Wino: "<<label<<std::endl;
    std::cout<<"\tRocznik\tButelki\n";
    for (int i =0; i<years; i++)
    {
        std::cout<<'\t'<<data.first()[i]<<'\t'<<data.second()[i]<<std::endl;
    }

}
