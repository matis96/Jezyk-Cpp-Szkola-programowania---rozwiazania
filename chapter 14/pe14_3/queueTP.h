template <class T>
class QueueTp
{
    private:
        // definicje zasięgu klasy
        // Node to definicja zagnieżdżona klasy, lokalna względem tej klasy
        struct Node { T item; struct Node * next;};
        enum {Q_SIZE = 10};
        // prywatne składowe klasy
        Node * front;       // wskaźnik czoła kolejki
        Node * rear;        // wskaźnik ogona kolejki
        int items;          // bieżąca liczba elementów kolejki
        const int qsize;    // maksymalna liczba elementów kolejki
        // definicje blokujące publiczny dostęp do operacji kopiowania
        QueueTp(const QueueTp & q) : qsize(0) { }
        QueueTp & operator=(const QueueTp & q) { return *this;}
    public:
        QueueTp(int qs = Q_SIZE);         // tworzy kolejkę o pojemności qs
        ~QueueTp();
        bool isempty() const {return items == 0;};
        bool isfull() const {return items == qsize;};
        int queuecount() const {return items;};
        bool enqueue(const T &item); // dodaje element na koniec kolejki
        bool dequeue(T &item);       // wyciąga element z czoła kolejki
};

template <class T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
    front = rear = NULL;      // albo nullptr
    items = 0;
}

template <class T>
QueueTp<T>::~QueueTp()
{
    Node * temp;
    while (front != NULL)     // do wyczerpania kolejki
    {
        temp = front;         // zachowanie adresu elementu bieżącego
        front = front->next;  // przesunięcie wskaźnika do elementu następnego
        delete temp;          // zwolnienie elementu spod zapamiętanego adresu
    }
}
template <class T>
bool QueueTp<T>::enqueue(const T &item)
{
    if (isfull())
        return false;
    Node * add = new Node;     // utworzenie węzła
    // w przypadku niepowodzenia przydziału new zrzuci wyjątek std::bad_alloc
    add->item = item;          // ustawienie wskaźników węzłów
    add->next = NULL;          // albo nullptr;
    items++;
    if (front == NULL)         // jeśli kolejka jest pusta,
        front = add;           // umieść element na czele listy
    else
        rear->next = add;      // w przeciwnym przypadku dołącz do końca
    rear = add;                // rear wskazuje teraz nowy węzeł
    return true;
}

template <class T>
bool QueueTp<T>::dequeue(T & item)
{
    if (front == NULL)
        return false;
    item = front->item;    // skopiowanie do item pierwszego elementu z kolejki
    items--;
    Node * temp = front;   // zachowanie położenia pierwszego elementu
    front = front->next;   // przestawienie wskaźnika front na następny element
    delete temp;           // usunięcie dotychczasowego pierwszego elementu
    if (items == 0)
        rear = NULL;
    return true;
}
