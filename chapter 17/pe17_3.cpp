//pe17_3.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
int main(int argc, char *argv[])
{
    using namespace std;
    if (argc!=3)
    {
        cerr << "Skladnia: " << argv[0] << " plik1 plik2\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin(argv[1]);
    ofstream fout(argv[2]);
    char ch;
    if (!fin.is_open())
    {
        cerr << "Nie mozna otworzyc pliku "<<argv[1]<<endl;
        exit(EXIT_FAILURE);
    }
    if (!fout.is_open())
    {
        cerr << "Nie mozna otworzyc pliku "<<argv[2]<<endl;
        exit(EXIT_FAILURE);
    }
    while((ch=fin.get())!=EOF)
        fout << ch;
    fout.close();
    fin.close();
}
