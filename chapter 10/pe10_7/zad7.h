class Plorg
{
private:
    static const int len = 20;
    char imie[len];
    int sytosc;
public:
    Plorg(const char *name = "Plorga", int x = 50);
    void sytosc_zmiana(int x);
    void show() const;
};
