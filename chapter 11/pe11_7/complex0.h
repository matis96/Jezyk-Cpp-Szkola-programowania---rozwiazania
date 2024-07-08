#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class complex
{
private:
    double real;
    double imaginary;
public:
    complex(double a=0.0, double b=0.0);
    ~complex();
    complex operator+(const complex & c) const;
    complex operator-(const complex & c) const;
    complex operator*(const complex & c) const;
    complex operator*(double x) const;
    friend complex operator*(double x, const complex & c);
    complex operator~() const;
    friend std::ostream & operator<<(std::ostream & os, const complex & c);
    friend std::istream & operator>>(std::istream & os, complex & c);
};
#endif // COMPLEX0_H_
