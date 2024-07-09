//pe17_4.cpp
#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
    ifstream fin1("zad4_in1.txt"), fin2("zad4_in2.txt");
    ofstream fout("zad4_out.txt");
    //char ch1, ch2;
    string plik1, plik2;
    while (!fin1.eof() || !fin2.eof())
    {
        if (!fin1.eof())
        {
            getline(fin1, plik1);
            fout << plik1<<" ";
        }
        if (!fin2.eof())
        {
            getline(fin2, plik2);
            fout << plik2<<endl;;
        }
    }

}
