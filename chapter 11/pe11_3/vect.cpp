// vect.cpp -- implementacje metod klasy Vector
#include <cmath>
#include "vect.h"        // w³¹cza plik nag³ówkowy <iostream>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    // przelicznik radianów na stopnie
    const double Rad_to_deg = 45.0 / atan(1.0);
    // powinno wyjœæ oko³o 57.2957795130823
    // metody prywatne
    // oblicza d³ugoœæ wektora ze sk³adowych x i y
    /*void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }*/
    double Vector::angval() const
    {
        if (x == 0.0 && y == 0.0)
            return 0.0;
        else
            return atan2(y, x);
    }

    // oblicza sk³adow¹ x ze wspó³rzêdnych biegunowych
    void Vector::set_x(double n1, double n2)
    {
        x = n1 * cos(n2 / Rad_to_deg);
    }

    // oblicza sk³adow¹ y ze wspó³rzêdnych biegunowych
    void Vector::set_y(double n1, double n2)
    {
        y = n1 * sin(n2 / Rad_to_deg);
    }

    // metody publiczne
    Vector::Vector()          // konstruktor domyœlny
    {
        x = y = 0.0;
        mode = RECT;
    }

    // konstruuje wektor o zadanych wspó³rzêdnych biegunowych (w trybie 'p')
    // b¹dŸ prostok¹tnych (w domyœlnym trybie 'r')
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            //set_mag();
            //set_ang();
        }
        else if (form == POL)
        {
            //mag = n1;
            //ang = n2 / Rad_to_deg;
            set_x(n1, n2);
            set_y(n1, n2);
        }
        else
        {
            cout << "Niepoprawna wartoœæ trzeciego argumentu Vector() -- ";
            cout << "zerujê wektor\n";
            x = y =  0.0;
            mode = RECT;
        }
    }

    // zerowanie wartoœci wektora dla zadanych wspó³rzêdnych kartezjañskich (dla RECT)
    // albo dla zadanych wspó³rzêdnych biegunowych (POL)
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            //set_mag();
            //set_ang();
        }
        else if (form == POL)
        {
            //mag = n1;
            //ang = n2 / Rad_to_deg;
            set_x(n1, n2);
            set_y(n1, n2);
        }
        else
        {
            cout << "Niepoprawny trzeci argument set() -- ";
            cout << "zerujê wektor\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector()   // destruktor
    {
    }

    void Vector::polar_mode()  // prze³¹cza do reprezentacji biegunowej
    {
        mode = POL;
    }

    void Vector::rect_mode()   // prze³¹cza do reprezentacji kartezjañskiej
    {
        mode = RECT;
    }



    // przeci¹¿one operatory
    // dodawanie dwóch wektorów
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    // odejmowanie wektora b od wektora a
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    // zmienia znak wektora
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    // mno¿y wektor wywo³uj¹cy przez n
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    // funkcje zaprzyjaŸnione
    // mno¿y n przez wektor a
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    // wyœwietla wspó³rzêdne wektora (prostok¹tne w trybie RECT,
    // biegunowe w trybie POL)
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
        {
            os << "(m,a) = (" << v.magval() << ", "
                << v.angval() * Rad_to_deg << ")";
        }
        else
            os << "Niepoprawny tryb reprezentacji obiektu wektora";
        return os;
    }
} // koniec przestrzeni nazw VECTOR


