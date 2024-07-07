// golf.h - do pe9-1.cpp

const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

//wersja nieinteraktywna:
// funkcja ustawia w strukturze golf zadane nazwisko i handicap
// na podstawie argumentow wywolania
void setgolf(golf & g, const char * name, int hc);

//wersja interaktywna:
// funkcja pobiera nazwisko i wartosc handicapu od uzytkownika
// i ustawia pola struktury g zgodnie z pobranymi wartosciami;
// zwraca 1, jesli udalo sie odczytac z wejscia wartosc pola name,
// albo 0, kiedy pole name jest ciagiem pustym
int setgolf(golf & g);

//ustawia handicap gracza
void handicap(golf & g, int hc);

//wyswietla zawartosc pol struktury golf
void showgolf(const golf & g);


