#ifndef _CARD_H_
#define _CARD_H_
class Card
{
private:
    enum {Kolor = 4};
    static const char *pc[Kolor];
    const char * card;
    int number;
public:
    Card();
    void Show() const;
};
#endif // _CARD_H_
