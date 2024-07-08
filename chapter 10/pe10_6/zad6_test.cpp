#include <iostream>
#include "zad6.h"

int main()
{
    Move test1;
    test1.showmove();
    test1.reset(5.1, 6.9);
    test1.showmove();
    test1.reset();
    test1.showmove();

    Move test2(8.7, 6.9);
    Move test3(5.6, 6.8);
    Move test4 = test2.add(test3);
    test4.showmove();
    test4.reset(8.8, 6.9);
    test4.showmove();

}
