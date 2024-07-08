// stonewt.h -- definicja klasy Stonewt
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
    public:
    enum Mode {STN, LBS, LBS_F};
    private:
        enum {Lbs_per_stn = 14}; // liczba funt�w na kamie�
        int stone;               // masa w calych kamieniach
        double pds_left;         // reszta w funtach
        double pounds;           // masa w funtach
        Mode mode;
    public:
        Stonewt(double lbs);          // konstruktor dla funt�w
        Stonewt(int stn, double lbs); // konstruktor dla kamieni i funt�w
        Stonewt();                    // konstruktor domy�lny
        ~Stonewt();
        void setSTN() {mode = STN;};
        void setLBS() {mode = LBS;};
        void setLBS_F() {mode = LBS_F;};
        //void show_lbs() const; // wy�wietla mas� w funtach
        //void show_stn() const; // wy�wietla mas� w kamieniach
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
        Stonewt operator+(const Stonewt & s) const;
        Stonewt operator-(const Stonewt & s) const;
        Stonewt operator*(double n) const;
        friend Stonewt operator*(double n, const Stonewt & s);
};
#endif


