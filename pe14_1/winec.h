#include <string>
#include <valarray>
#include <iostream>

template <class T1, class T2>
class Pair
{
    private:
        T1 a;
        T2 b;
    public:
        T1 & first();
        T2 & second();
        T1 first() const { return a; }
        T2 second() const { return b; }
        Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
        Pair() {}
};

template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}

    template<class T1, class T2>
T2 & Pair<T1,T2>::second()
{
    return b;
}

class Wine
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string label;
    int years;
    PairArray data;
public:
    // inicjalizuje składową label parametrem l, liczbę lat parametrem y,
    // roczniki parameter yr[], składową bottles parametrem bot[]
    Wine(const char * l, int y, const int yr[], const int bot[]);
    // inicjalizuje składową label parametrem l, liczbę lat parametrem y,
    // tworzy tablicę obiektów o długości y
    Wine(const char * l, int y);
    void GetBottles();
    const std::string & Label() const { return label;}
    int sum() const;
    void Show() const;
};
