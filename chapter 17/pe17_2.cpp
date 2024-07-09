//pe17_2.cpp
#include <iostream>
#include <fstream>
int main(int argc, char *argv[])
{
    using namespace std;
    ofstream fout(argv[1]);
    char ch;
    while((ch=cin.get())!=EOF)
        fout << ch;
    fout.close();
}
