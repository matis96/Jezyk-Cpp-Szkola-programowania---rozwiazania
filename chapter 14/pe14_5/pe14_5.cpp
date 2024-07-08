// pe15-5.cpp
// useemp1.cpp - używa klas hierarchi abst_emp

#include <iostream>
using namespace std;
#include "emp.h"

int main(void)
{
system("chcp 65001  > nul");
  employee em("Tadeusz", "Hubert", "Sprzedawca");
  cout << em << endl;
  em.ShowAll();
  cout<<endl;

  manager ma("Amorfiusz","Smoczewski", "Malarz",5);
  cout << ma << endl;
  ma.ShowAll();
  cout<<endl;

  fink fi("Maurycy", "Olkuski", "Hydraulik", "Julian Bar");
  cout << fi << endl;
  fi.ShowAll();
  cout<<endl;

  highfink hf(ma, "Jan Kudłaty");
  hf.ShowAll();
  cout<<endl;

  cout << "Wciśnij dowolny przycisk, aby przejść do następnego etapu:\n";
  cin.get();
  while (cin.get() != '\n')
    continue;
  highfink hf2;
  hf2.SetAll();
  cout << "Używa wskaźnika abstr_emp *:\n";
  abstr_emp *tri[4] = { &em, &fi, &hf, &hf2};
  for(int i=0;i<4;i++){
    tri[i]->ShowAll();
    cout<<endl;
  }

  return 0;
}
