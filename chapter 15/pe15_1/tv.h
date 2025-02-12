// tv.h -- klasy Tv oraz Remote
#ifndef TV_H_
#define TV_H_
class Remote;
class Tv
{
    public:
        friend class Remote; // klasa Remote ma dostęp do prywatnych danych Tv
        enum { Off, On };
        enum { MinVal, MaxVal = 20 };
        enum { Antenna, Cable };
        enum { TV, DVD };

        Tv(int s = Off, int mc = 125) : state(s), volume(5),
        maxchannel(mc), channel(2), mode(Cable), input(TV) {}
        void onoff() {state = (state == On) ? Off : On;}
        bool ison() const {return state == On;}
        bool volup();
        bool voldown();
        void chanup();
        void chandown();
        void set_mode() {mode = (mode == Antenna) ? Cable : Antenna;}
        void set_input() {input = (input == TV) ? DVD : TV;}
        void settings() const; // wyświetla wszystkie ustawienia
        bool set_pilot(Remote & r);
    private:
        int state; // włączony lub wyłączony
        int volume; // zakładamy, że można głośność wyrazić liczbą
        int maxchannel; // maksymalna liczba kanałów
        int channel; // aktualnie włączony program
        int mode; // antena lub telewizja kablowa
        int input; // telewizja lub DVD
};

class Remote
{
    private:
        int mode; // kontroluje TV lub DVD
        int pilot; // tryb zwykły lub interaktywny
    public:
        enum {Usual, interactive};
        friend class Tv;
        Remote(int m = Tv::TV, int p = Usual) : mode(m), pilot(p) {}
        bool volup(Tv & t) { return t.volup();}
        bool voldown(Tv & t) { return t.voldown();}
        void onoff(Tv & t) { t.onoff();}
        void chanup(Tv & t) {t.chanup();}
        void chandown(Tv & t) {t.chandown();}
        void set_chan(Tv & t, int c) {t.channel = c;}
        void set_mode(Tv & t) {t.set_mode();}
        void set_input(Tv & t) {t.set_input();}
        void pilot_mode() const;
};
#endif


