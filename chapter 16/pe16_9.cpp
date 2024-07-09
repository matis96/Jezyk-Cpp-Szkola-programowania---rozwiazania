//zad9.cpp
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <cstdlib>
#include <list>
#include <algorithm>
using namespace std;
const int N1 = 100000;
const int N2 = 1000000;
const int N3 = 10000000;
int main()
{
    srand (time(NULL));

    //N1
    const int N = N3;
    vector<int> vi0(N);
    for (int i=0; i<N; i++)
        vi0[i] = rand()%N;
    vector<int> vi(vi0);
    list<int> li(vi0.begin(), vi0.end());
    clock_t start_vector = clock();
    sort(vi.begin(), vi.end());
    clock_t end_vector = clock();
    cout<<"Dla rozmiaru "<<N1<<":"<<endl;
    cout<<"vector sort: "<<(double) (end_vector - start_vector)/CLOCKS_PER_SEC<<endl;
    clock_t start_list = clock();
    li.sort();
    clock_t end_list = clock();
    cout<<"list sort: "<<(double) (end_list - start_list)/CLOCKS_PER_SEC<<endl;
    li.assign(vi0.begin(), vi0.end());
    clock_t start_op = clock();
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    clock_t end_op = clock();
    cout<<"Op: "<<(double) (end_op - start_op)/CLOCKS_PER_SEC<<endl;

   /* //N2
    vector<int> vi1(N2);
    for (int i=0; i<N2; i++)
        vi1[i] = rand()%N2;
    vector<int> vi(vi1);
    list<int> li(vi0.begin(), vi0.end());
    clock_t start_vector = clock();
    sort(vi.begin(), vi.end());
    clock_t end_vector = clock();
    cout<<"Dla rozmiaru "<<N2<<":"<<endl;
    cout<<"Vector sort: "<<(double) (end_vector - start_vector)/CLOCKS_PER_SEC<<endl;
    clock_t start_list = clock();
    li.sort();
    clock_t end_list = clock();
    cout<<"List sort: "<<(double) (end_list - start_list)/CLOCKS_PER_SEC<<endl;
    li.assign(vi0.begin(), vi0.end());
    clock_t start_op = clock();
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    clock_t end_op = clock();
    cout<<"Op: "<<(double) (end_op - start_op)/CLOCKS_PER_SEC<<endl;

    //N3
    vector<int> vi0(N3);
    for (int i=0; i<N3; i++)
        vi0[i] = rand()%N3;
    vector<int> vi(vi0);
    list<int> li(vi0.begin(), vi0.end());
    clock_t start_vector = clock();
    sort(vi.begin(), vi.end());
    clock_t end_vector = clock();
    cout<<"Dla rozmiaru "<<N3<<":"<<endl;
    cout<<"Vector sort: "<<(double) (end_vector - start_vector)/CLOCKS_PER_SEC<<endl;
    clock_t start_list = clock();
    li.sort();
    clock_t end_list = clock();
    cout<<"List sort: "<<(double) (end_list - start_list)/CLOCKS_PER_SEC<<endl;
    li.assign(vi0.begin(), vi0.end());
    clock_t start_op = clock();
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    clock_t end_op = clock();
    cout<<"Op: "<<(double) (end_op - start_op)/CLOCKS_PER_SEC<<endl; */
}
