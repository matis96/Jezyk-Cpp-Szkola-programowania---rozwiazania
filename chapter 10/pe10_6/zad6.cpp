#include <iostream>
#include "zad6.h"
using namespace std;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
}

Move Move::add(const Move & m) const
{
    double sum_x = this->x + m.x;
    double sum_y = this->y + m.y;
    Move tmp(sum_x, sum_y);
    return tmp;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
