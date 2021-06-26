#include <fstream>
#include <iostream>

using namespace std;

int main(void)
{
    ofstream fout;
    ifstream fin;
    char a[100] = {0};

    fout.open("time.c");
    fin.open("time.c");

    fout << "//Hello test???";
    fin >> a;
    cout << a;

    fout.close();
    fin.close();

    return 0;
}