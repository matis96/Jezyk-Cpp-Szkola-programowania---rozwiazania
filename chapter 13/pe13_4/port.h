#include <iostream>
using namespace std;

class Port
{
private:
    char * brand;
    char style[20];     // na przykład lekko brązowe, rubinowe, z najlepszego rocznika
    int bottles;
public:
    Port(const char * br = "Brak", const char * st = "Brak", int b = 0);
    Port(const Port & p);   //konstruktor kopiujący
    virtual ~Port() { delete [] brand; }
    Port & operator=(const Port & p);
    Port & operator+=(int b);   // dodaje b do bottles
    Port & operator-=(int b);   // odejmuje b od bottles, jeśli operacja ta jest możliwe
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream & operator<<(ostream & os, const Port & p);
};

class VintagePort : public Port     // styl zawsze "najlepszy rocznik"
{
private:
    char * nickname;    // na przykład "Szlachetny", "Aksamitny"
    int year;   // rok winobrania
public:
    VintagePort();
    VintagePort(const char * br, int b, const char * nm, int y);
    VintagePort(const VintagePort & vp);
    ~VintagePort() { delete [] nickname; }
    VintagePort & operator=(const VintagePort & vp);
    void Show() const;
    friend ostream & operator<<(ostream & os, const VintagePort & vp);

};
