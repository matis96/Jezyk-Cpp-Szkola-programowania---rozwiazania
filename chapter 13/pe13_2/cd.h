// klasa bazowa
class Cd {  // reprezentuje płytę CD
private:
    char *performers;
    char *label;
    int selections;     // liczba utworów
    double playtime;    // długość płyty w minutach
public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report() const; // wyświetla informacje o wszystkich danych płyty
    Cd & operator=(const Cd & d);
};

