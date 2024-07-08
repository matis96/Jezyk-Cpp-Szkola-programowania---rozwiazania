// dma.cpp -- metody klas

#include "dma.h"
#include <cstring>

// metody klasy DMA
DMA::DMA(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

DMA::DMA(const DMA & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

DMA::~DMA()
{
    delete [] label;
}

DMA & DMA::operator=(const DMA & rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream & operator<<(std::ostream & os, const DMA & rs)
{
    os << "Etykietka: " << rs.label << std::endl;
    os << "Klasa: " << rs.rating << std::endl;
    return os;
}

void DMA::View() const
{
    using std::cout;
    using std::endl;
    cout << "Label: " << label << endl;
    cout << "Rating: " << rating << endl;
}

//metody baseDMA
baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    if (this == &rs)
        return *this;
    DMA::operator=(rs);
    return *this;
}

void baseDMA::View() const
{
    DMA::View();
}

lacksDMA::lacksDMA(const char * c, const char * l, int r)
: DMA(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const DMA & rs)
: DMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
    os << (const DMA &) ls;
    os << "Kolor: " << ls.color << std::endl;
    return os;
}

void lacksDMA::View() const
{
    DMA::View();
    std::cout<<"Color: "<<color<<std::endl;
}

// metody klasy hasDMA
hasDMA::hasDMA(const char * s, const char * l, int r)
: DMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs)
: DMA(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
: DMA(hs) // wywołuje konstruktor kopiujący klasy bazowej
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    DMA::operator=(hs); // kopiuje dane klasy bazowej
    delete [] style; // przygotowanie do nowego stylu
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
    os << (const DMA &) hs;
    os << "Styl: " << hs.style << std::endl;
    return os;
}

void hasDMA::View() const
{
    DMA::View();
    std::cout<<"Style: "<<style<<std::endl;
}
