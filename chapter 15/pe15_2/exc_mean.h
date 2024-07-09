// exc_mean.h -- klasy wyjątków dla funkcji hmean() i gmean()
#include <iostream>
#include <stdexcept>
#include <string>
class bad_hmean : public std::logic_error
{
    //private:
        //double v1;
        //double v2;
    public:
        //bad_hmean(double a = 0, double b = 0) : v1(a), v2(b){}
        bad_hmean(const std::string & s = "hmean(): niepoprawne argumenty: a = -b\n") : std::logic_error(s) {}
        //void mesg();
};

/*inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << v1 << ", " << v2 << "): "
        << "niepoprawne argumenty: a = -b\n";
}*/

class bad_gmean : public std::logic_error
{
    public:
        //double v1;
        //double v2;
        bad_gmean(const std::string & s = "Argumenty funkcji gmean() powinny być >= 0\n") : std::logic_error(s) {}
        //const char * mesg();
};

/*inline const char * bad_gmean::mesg()
{
    return "Argumenty funkcji gmean() powinny być >= 0\n";
}*/


