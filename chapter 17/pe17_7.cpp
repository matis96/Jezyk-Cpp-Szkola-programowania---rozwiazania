//pe17_7.cpp
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void ShowStr(const string & );
void GetStrs(ifstream &, vector<string> & );
class Store
{
private:
    ofstream * os;
public:
    Store(ofstream & out) {os = &out;};
    Store operator()(const string & s);
};

Store Store::operator()(const string & s)
{
    std::size_t len = s.size();
    os->write((char*)&len, sizeof(std::size_t));
    os->write(s.data(), len);
    return *this;
}
int main()
{

    vector<string> vostr;
    string temp;

// pobierz lancuchy
    cout << "Podaj lancuchy (aby zakonczyc, wprowadz pusty wiersz):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Oto twoje dane wejsciowe.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

// zapisz w pliku
    ofstream fout("lancuchy.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

// odczytaj zawartosc pliku
    vector<string> vistr;
    ifstream fin("lancuchy.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Nie mozna otworzyc pliku do odczytu.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nOto lanuchy odczytane z pliku:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

void ShowStr(const string & str)
{
    std::cout<<str<<endl;
}

void GetStrs(ifstream & fin, vector<string> & v_str)
{
    size_t len;
    while (fin.read((char * ) len, sizeof(size_t)))
    {
        string temp;
        char ch;
        for (int i = 0; i<len; i++)
        {
            fin.read((char *) &ch, sizeof(char));
            temp += ch;
        }
        v_str.push_back(temp);
    }
}
