//zad4.cpp
#include <iostream>

int main()
{

    float Dafne = 100;
    float Cleo = 100;
    int lata = 0;
    std::cout <<"\t Cleo \t Dafne"<<std::endl;
    while (Dafne >= Cleo)
    {
        Dafne += 10;
        Cleo += (0.05 * Cleo);
        lata++;
        std::cout << "Rok " << lata << "\t "<<Cleo<<"\t "<<Dafne<<std::endl;
    }
    std::cout << lata;
}
