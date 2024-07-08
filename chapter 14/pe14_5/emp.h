// emp.h -- plik nagłówkowy dla klasy abstr_emp i pochodnych
#include <iostream>
#include <string>

class abstr_emp
{
private:
  std::string fname;        // imię obiektu abstr_emp
  std::string lname;        // nazwisko obiektu abstr_emp
  std::string job;          // zawód obiektu abstr_emp
public:
  abstr_emp(): fname("brak"), lname("brak"), job("brak") {}
  abstr_emp(const std::string & fn, const std::string & ln, const std::string & j) :
      fname(fn), lname(ln), job(j) {}
  virtual void ShowAll() const;     // opisuje i wyświetla wszystkie dane
  virtual void SetAll();            // prosi użytkownika o podanie wartości
  friend std::ostream & operator<<(std::ostream & os,const abstr_emp & e);  //tylko wyświetla imię i nazwisko
  virtual ~abstr_emp() = 0;     // wirtualna klasa bazowa
};

class employee : public abstr_emp
{
public:
  employee();
  employee(const std::string & fn, const std::string & ln, const std::string & j)
  : abstr_emp(fn, ln, j){};
  virtual void ShowAll() const {abstr_emp::ShowAll();}
  virtual void SetAll() {abstr_emp::SetAll();}
};

class manager : virtual public abstr_emp
{
private:
  int inchargeof;       // liczba obiektów abstr_emps, którymi zarządza
protected:
  int InChargeOf() const { return inchargeof; }     //wyjście
  int & InChargeOf(){ return inchargeof; }      // wejście
  void Show() const;
  void Set();
public:
  manager() : abstr_emp(), inchargeof(0) {}
  manager(const std::string & fn, const std::string & ln, const std::string & j, int ico = 0)
  : abstr_emp(fn, ln, j), inchargeof(ico) {}
  manager(const abstr_emp & e, int ico) : inchargeof(ico) {}
  manager(const manager & m) {}
  virtual void ShowAll() const;
  virtual void SetAll();
};


class fink : virtual public abstr_emp{
  private:
    std::string reportsto;      // do kogo fink (donosiciel) przesyła raport
  protected:
    const std::string ReportsTo() const{ return reportsto; }
    std::string & ReportsTo() { return reportsto; }
    void Show() const;
    void Set();
  public:
    fink() : abstr_emp(), reportsto("brak") {}
    fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
    : abstr_emp(fn, ln, j), reportsto(rpo) {}
    fink(const abstr_emp & e, const std::string & rpo) : reportsto(rpo) {}
    fink(const fink & e) {}
    virtual void ShowAll() const;
    virtual void SetAll();
};


class highfink : public manager, public fink{   // główny donosiciel
public:
  highfink() {}
  highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico)
  : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}
  highfink(const abstr_emp & e, const std::string & rpo, int ico)
  : manager(e, ico), fink(e, rpo) {}
  highfink(const fink & f, int ico);
  highfink(const manager & m, const std::string & rpo)
  : abstr_emp(m), manager(m), fink(m, rpo) {}
  highfink(const highfink & h);
  virtual void ShowAll() const;
  virtual void SetAll();
};

