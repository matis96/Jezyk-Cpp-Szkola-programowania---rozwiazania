// stonewt.cpp -- implementacje metod klasy Stonewt
#include <iostream>
using std::cout;
#include "stonewt.h"

// konstruuje obiekt Stonewt z wartosci typu double
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn; // dzielenie calkowite
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = LBS;
}

// konstruuje obiekt Stonewt z liczby kamieni i funtów
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
    mode = LBS_F;
}

Stonewt::Stonewt() // konstruktor domyœlny, zeruje obiekt
{
    stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt() // destruktor
{
}
// pokazuje masê w kamieniach
/*void Stonewt::show_stn() const
{
    cout << stone << " kamieni, " << pds_left << " funtów\n";
}
// pokazuje masê w funtach
void Stonewt::show_lbs() const
{
    cout << pounds << " funtów\n";
}*/
std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    if (s.mode == Stonewt::STN)
        os << s.stone <<" kamieni\n";
    else if (s.mode == Stonewt::LBS)
        os << (int)s.pounds<<" funtow\n";
    else if (s.mode == Stonewt::LBS_F)
        os << s.pounds << " funtow\n";
    else
        os << "Niepoprawny tryb reprezentacji klasy Stone\n";
    return os;
}

Stonewt Stonewt::operator+(const Stonewt & s) const
{
    return Stonewt(pounds + s.pounds);
}
Stonewt Stonewt::operator-(const Stonewt & s) const
{
    return Stonewt(pounds - s.pounds);
}
Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(n*pounds);
}
Stonewt operator*(double n, const Stonewt & s)
{
    return s * n;
}
