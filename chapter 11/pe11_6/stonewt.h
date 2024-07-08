// stonewt.h -- definicja klasy Stonewt
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14}; // liczba funtów na kamieñ
        int stone;               // masa w ca³ych kamieniach
        double pds_left;         // reszta w funtach
        double pounds;           // masa w funtach
    public:
        Stonewt(double lbs);          // konstruktor dla funtów
        Stonewt(int stn, double lbs); // konstruktor dla kamieni i funtów
        Stonewt();                    // konstruktor domyœlny
        ~Stonewt();
        void show_lbs() const; // wyœwietla masê w funtach
        void show_stn() const; // wyœwietla masê w kamieniach
        bool operator==(const Stonewt & s) const;
        bool operator!=(const Stonewt & s) const;
        bool operator>(const Stonewt & s) const;
        bool operator>=(const Stonewt & s) const;
        bool operator<(const Stonewt & s) const;
        bool operator<=(const Stonewt & s) const;

};
#endif


