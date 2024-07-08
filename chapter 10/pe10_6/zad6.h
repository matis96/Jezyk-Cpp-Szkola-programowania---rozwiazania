class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);       // ustawia x na a, y na b
    void showmove() const;                   // wyswietla biezace wartosci x i y
    Move add(const Move & m) const;
    // powyzsza metoda sumuje x obiektu m i x obiektu wywolujacego,
    // y obiekty m i y obiektu wywolujacego, tworzy nowy obiekt, inicjalizuje
    // go obliczonymi sumami x i y i zwraca tak zainicjalizowany obiekt
    void reset(double a = 0, double b = 0);    //ustawia x na a, y na b
};

