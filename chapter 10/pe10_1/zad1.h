#ifndef ZAD1_H_
#define ZAD1_H_
#include <string>

class Bank_Account
{
	private:
		std::string m_surname;
		std::string m_acc_number;
		double m_balance;
	public:
	    Bank_Account();
		Bank_Account(const std::string & name, const std::string & acc_no, double bal=0.0); //tworzenie obiektu
		~Bank_Account();
		void Show() const; 	//wyswietlanie danych konta
		void income(double n);	//przelew przychodzacy
		void outcome(double n);	//przelew wychodzacy

};
#endif // ZAD1_H_
