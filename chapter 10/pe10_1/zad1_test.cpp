#include "zad1.h"


int main()
{
    Bank_Account test1;
    test1.Show();
    Bank_Account test2("Kowalski", "12345", 1290.81);
    test2.Show();
    test2.income(1000);
    test2.outcome(500);
    test2.Show();
}
