#include "exc_mean.h"
using namespace std;
void bad_hmean::report() const
{
    cout<<"Błąd funkcji hmean: niepoprawne argumenty: a = -b\n";
    cout<<"Użyto: "<<getv1()<<" i "<<getv2()<<endl;
}

void bad_gmean::report() const
{
    cout<<"Argumenty funkcji gmean() powinny być >= 0\n";
    cout<<"Użyto: "<<getv1()<<" i "<<getv2()<<endl;
}
