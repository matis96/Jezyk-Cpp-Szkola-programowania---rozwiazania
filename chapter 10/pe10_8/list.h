typedef unsigned long Item;
class List
{
private:
    enum {MAX = 4};
    Item items[MAX];
    int top;        // indeks ostatniego miejsa w liscie
public:
    List();
    bool add(const Item & item);
    bool isempty() const;
    bool isfull() const;
    void visit(void (*pf)(Item &));
};
