namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    // kopiuje najmniejszy z czterech lub n elementow z tablicy ar
    // do skladowej sales struktury s i oblicza oraz zachowuje w odpowiednich
    // skladowych struktury sales wartosci: srednia, minimalna i maksymalna;
    // zeruje pozostale elementy tablicy sales (jesli sa)
    void setSales(Sales & s, const double ar[], int n);

    // pobiera interaktywnie informacje dla 4 kwartalow,
    // zachowuje je w skladowej sales struktury s i oblicza oraz zachowuje
    // w odpowiednich skladowych s wartosc srednia, minimalna i maksymalna
    void setSales(Sales & s);

    // wyswietla komplet informacji ze struktury s
    void showSales(const Sales & s);
}
