//use cmd :g++ generate.cpp -o generate.exe -Wall -static-libgcc -std=c++17 -fexec-charset=GBK -finput-charset=UTF-8
#include <iostream>

using namespace std;

int main(void)
{
    string a, name, s, exe;
    int number;
    while (true)
    {
        cout << "\'.c\' input 1,\'.cpp\' input 2:";
        cin >> number;
        if (1 != number && 2 != number)
        {
            cout << "Error,please input again!"
                 << endl
                 << endl;
            continue;
        }
        break;
    }

    printf("input file name:");
    cin >> name;
    if (1 == number)
        s = "gcc " + name + ".c -g -Wall -o " + name + ".exe";
    else if (2 == number)
        s = "g++ " + name + ".cpp -g -Wall -o " + name + ".exe";
    exe = name + ".exe";
    system(s.c_str());
    system(exe.c_str());
    return 0;
}