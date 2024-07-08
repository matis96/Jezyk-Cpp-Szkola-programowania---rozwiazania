// stonewt.h -- definicja klasy Stonewt
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
    public:
    enum Mode {STN, LBS, LBS_F};
    private:
        enum {Lbs_per_stn = 14}; // liczba funtów na kamieñ
        int stone;               // masa w calych kamieniach
        double pds_left;         // reszta w funtach
        double pounds;           // masa w funtach
        Mode mode;
    public:
        Stonewt(double lbs);          // konstruktor dla funtów
        Stonewt(int stn, double lbs); // konstruktor dla kamieni i funtów
        Stonewt();                    // konstruktor domyœlny
        ~Stonewt();
        void setSTN() {mode = STN;};
        void setLBS() {mode = LBS;};
        void setLBS_F() {mode = LBS_F;};
        //void show_lbs() const; // wyœwietla masê w funtach
        //void show_stn() const; // wyœwietla masê w kamieniach
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
        Stonewt operator+(const Stonewt & s) const;
        Stonewt operator-(const Stonewt & s) const;
        Stonewt operator*(double n) const;
        friend Stonewt operator*(double n, const Stonewt & s);
};
#endif


