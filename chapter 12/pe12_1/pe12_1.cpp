#include "cow.h"

int main()
{
    Cow cow1;
    Cow cow2("Milka", "mleko", 341.79);
    Cow cow3(cow2);
    cow1=cow2;
    cow3.ShowCow();
}
