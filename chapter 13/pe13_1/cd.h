// klasa bazowa
class Cd {  // reprezentuje płytę CD
private:
    char performers[50];
    char label[20];
    int selections;     // liczba utworów
    double playtime;    // długość płyty w minutach
public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(){};
    virtual void Report() const; // wyświetla informacje o wszystkich danych płyty
};
