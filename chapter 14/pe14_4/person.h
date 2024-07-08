#include <string>
#include "card.h"

class Person
{
private:
    std::string fullname;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Person(): fullname("brak") {}
    Person(const std::string & s) : fullname(s) {}
    virtual ~Person() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};


class Gunslinger: virtual public Person
{
private:
    double fDraw;
    int cuts;
protected:
    void Data() const;
    void Get();
public:
    Gunslinger(): Person(), fDraw(0), cuts(0) {}
    void Set();
    double Draw() const {return fDraw;};
    void Show() const;
};

class PokerPlayer: virtual public Person
{
private:
    //int card;
    Card karta;
protected:
    void Data() const;
public:
    PokerPlayer();
    Card Draw();
    void Set();
    void Show() const;
};

class BadDude: public Gunslinger, public PokerPlayer
{
protected:
    void Get();
    void Data() const;
public:
    void Set();
    void Show() const;
    double Gdraw() const {return Gunslinger::Draw();}
    Card Cdraw() {return PokerPlayer::Draw();}

};
