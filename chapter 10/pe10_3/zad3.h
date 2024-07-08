

class golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    golf();
    golf(const char *, int );
    int setgolf();
    void handicap_set(int hc);
    void showgolf() const;
};
