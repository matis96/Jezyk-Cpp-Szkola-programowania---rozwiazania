// exc_mean.h -- klasy wyjątków dla funkcji hmean() i gmean()
#include <iostream>
#include <stdexcept>
#include <string>

class bad : public std::logic_error
{
private:
    double v1;
    double v2;
protected:
    double getv1() const {return v1;}
    double getv2() const {return v2;}
public:
    bad(double a = 0, double b = 0) : std::logic_error(""), v1(a), v2(a) {}
    virtual void report() const = 0;
};

class bad_hmean : public bad
{
public:
    bad_hmean(double a = 0, double b = 0) : bad(a, b) {}
    //const char * what() const {return "niepoprawne argumenty: a = -b\n";}
    void report() const;
};

class bad_gmean : public bad
{
public:
    bad_gmean(double a = 0, double b = 0) : bad(a, b) {}
    //const char * what() {return "Argumenty funkcji gmean() powinny być >= 0\n";}
    void report() const;
};
