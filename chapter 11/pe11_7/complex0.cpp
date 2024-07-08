#include "complex0.h"


complex::complex(double a, double b)
{
    real = a;
    imaginary = b;
}

complex::~complex()
{

}

complex complex::operator+(const complex & c) const
{
    return complex(real+c.real, imaginary+c.imaginary);
}

complex complex::operator-(const complex & c) const
{
    return complex(real-c.real, imaginary-c.imaginary);
}
complex complex::operator*(const complex & c) const
{
    return complex(real*c.real - imaginary*c.imaginary, real*c.imaginary + imaginary *c.real);
}
complex complex::operator*(double x) const
{
    return complex(x*real, x*imaginary);
}

complex operator*(double x, const complex & c)
{
    return c*x;
}

complex complex::operator~() const
{
    return complex(real, -imaginary);
}
std::ostream & operator<<(std::ostream & os, const complex & c)
{
    std::cout << "("<<c.real<<","<<c.imaginary<<"i)";
    return os;
}

std::istream & operator>>(std::istream & os, complex & c)
{
    std::cout <<"skladowa rzeczywista: ";
    if(!(std::cin>>c.real))
        return os;
    std::cout<<"skladowa urojona: ";
    std::cin>>c.imaginary;
    return os;
}
