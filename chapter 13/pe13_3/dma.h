// dma.h -- dziedziczenie i dynamiczny przydział pamięci
#ifndef DMA_H_
#define DMA_H_
#include <iostream>


class DMA
{
private:
    char * label;
    int rating;

public:
    DMA(const char * l = "brak", int r = 0);
    DMA(const DMA & rs);
    virtual ~DMA();
    DMA & operator=(const DMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const DMA & rs);
    virtual void View() const = 0;
};

class baseDMA : public DMA
{
public:
    baseDMA(const char * l = "brak", int r = 0) : DMA(l,r){};
    virtual ~baseDMA(){}
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const DMA & rs);
    virtual void View() const;
};

// klasa pochodna bez dynamicznego przydziału pamięci
// nie jest potrzebny destruktor
// używa niejawnego konstruktora kopiującego
// używa niejawnego operatora przypisania
class lacksDMA : public DMA
{
    private:
        enum { COL_LEN = 40 };
        char color[COL_LEN];
    public:
        lacksDMA(const char * c = "brak", const char * l = "brak",
                int r = 0);
        lacksDMA(const char * c, const DMA & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const lacksDMA & rs);
        virtual void View() const;
};

// klasa pochodna z dynamicznym przydziałem pamięci
class hasDMA : public DMA
{
    private:
        char * style;
    public:
        hasDMA(const char * s = "brak", const char * l = "brak",
                int r = 0);
        hasDMA(const char * s, const baseDMA & rs);
        hasDMA(const hasDMA & hs);
        virtual ~hasDMA();
        hasDMA & operator=(const hasDMA & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const hasDMA & rs);
        virtual void View() const;
};

#endif

