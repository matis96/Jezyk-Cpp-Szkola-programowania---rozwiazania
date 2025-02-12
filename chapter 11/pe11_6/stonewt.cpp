// stonewt.cpp -- implementacje metod klasy Stonewt
#include <iostream>
using std::cout;
#include "stonewt.h"

// konstruuje obiekt Stonewt z wartości typu double
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn; // dzielenie całkowite
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// konstruuje obiekt Stonewt z liczby kamieni i funtów
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt() // konstruktor domyślny, zeruje obiekt
{
    stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt() // destruktor
{
}
// pokazuje masę w kamieniach
void Stonewt::show_stn() const
{
    cout << stone << " kamieni, " << pds_left << " funtów\n";
}
// pokazuje masę w funtach
void Stonewt::show_lbs() const
{
    cout << pounds << " funtów\n";
}

bool Stonewt::operator==(const Stonewt & s) const
{
    if (pounds == s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator!=(const Stonewt & s) const
{
    if (pounds != s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator>(const Stonewt & s) const
{
    if (pounds > s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator>=(const Stonewt & s) const
{
    if (pounds >= s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator<(const Stonewt & s) const
{
    if (pounds < s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator<=(const Stonewt & s) const
{
    if (pounds <= s.pounds)
        return true;
    else
        return false;
}

