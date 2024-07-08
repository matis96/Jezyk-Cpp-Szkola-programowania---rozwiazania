#include <iostream>
#include "zad1.h"

Bank_Account::Bank_Account()
{
    m_surname = "noname";
    m_acc_number = "XXXXX";
    m_balance = 0.0;
}
Bank_Account::Bank_Account(const std::string & name, const std::string & acc_no, double bal)
{
    m_surname = name;
    m_acc_number = acc_no;
    m_balance = bal;
}

Bank_Account::~Bank_Account() {}

void Bank_Account::Show() const
{
    std::cout <<"Nazwisko: "<<m_surname<<std::endl;
    std::cout <<"Nr konta: "<<m_acc_number<<std::endl;
    std::cout <<"Saldo: "   <<m_balance<<std::endl;
}

void Bank_Account::income(double n)
{
    m_balance+=n;
}

void Bank_Account::outcome(double n)
{
    m_balance-=n;
}
