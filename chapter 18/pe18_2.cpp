//pe18_2.cpp
#include <string>
#include <iostream>

using namespace std;
class Cpmv
{
public:
    struct Info
    {
        std::string qcode;
        std::string zcode;
    };
private:
    Info *pi;
public:
    Cpmv();
    Cpmv(std::string q, std::string z);
    Cpmv(const Cpmv & cp);
    Cpmv(Cpmv && mv);
    ~Cpmv();
    Cpmv & operator=(const Cpmv & cp);
    Cpmv & operator=(Cpmv && mv);
    Cpmv operator+(const Cpmv & obj) const;
    void Display() const;
};
Cpmv::Cpmv()
{
    pi = new Info;
    pi->qcode = "0000";
    pi->zcode = "0000";
}
Cpmv::Cpmv(std::string q, std::string z)
{
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv & cp)
{
    cout << "konstruktor kopiujacy"<<endl;
    pi = new Info;
    *pi = *cp.pi;
}

Cpmv::Cpmv(Cpmv && mv)
{
    cout<<"konstruktor przenoszacy:"<<endl;
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv()
{
    //cout<<"destruktor!!!";
    delete pi;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
    cout<<"przypisanie przenoszace\n";
    if (this == &mv)
        return *this;
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    return *this;
}
Cpmv Cpmv::operator+(const Cpmv & obj) const
{
    Cpmv temp = Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
    return temp;
}
void Cpmv::Display() const
{
    cout<<"qcode: "<<pi->qcode<<endl;
    cout<<"zcode: "<<pi->zcode<<endl;
}

int main()
{
    Cpmv zero;
    //zero.Display();
    Cpmv one("test1", "test2");
    //one.Display();
    Cpmv two = one;
    //two.Display();
    Cpmv three("abracadbra", "HubKluuk");
    Cpmv four(one+three);
    //four.Display();
    Cpmv five;
    five = move(three);
    five.Display();
    return 0;
}
