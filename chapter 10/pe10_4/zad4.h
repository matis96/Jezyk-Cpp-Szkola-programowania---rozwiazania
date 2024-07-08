namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        // kopiuje najmniejszy z czterech lub n elementow z tablicy ar
        // do skladowej sales struktury s i oblicza oraz zachowuje w odpowiednich
        // skladowych struktury sales wartosci: srednia, minimalna i maksymalna;
        // zeruje pozostale elementy tablicy sales (jesli sa)
        Sales();
        Sales(const double ar[], int n);

        // pobiera interaktywnie informacje dla 4 kwartalow,
        // zachowuje je w skladowej sales struktury s i oblicza oraz zachowuje
        // w odpowiednich skladowych s wartosc srednia, minimalna i maksymalna
        void setSales();

        // wyswietla komplet informacji ze struktury s
        void showSales() const;

    };
}
