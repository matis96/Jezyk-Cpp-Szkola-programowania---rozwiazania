#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "card.h"

const char * Card::pc[Card::Kolor] = {"pik", "trefl", "karo", "kier"};
Card::Card()
{
    srand(time(NULL));
    int choice = rand()%4+1;
    number = rand()%13+1;
    card = pc[choice];
}

void Card::Show() const
{
    std::cout<<"Kolor: "<<card<<" Karta: "<<number<<std::endl;
}
