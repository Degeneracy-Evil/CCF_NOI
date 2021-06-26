#include <iostream>

class Time
{
private:
    int second, minute, hour;

public:
    void disp();
    void input();
    void conversion(int, int, int);
};

void Time::conversion(int h = 0, int m = 0, int s = 0)
{
    minute = m + s / 60;
    second = s % 60;
    hour = h + minute / 60;
    minute %= 60;
}

void Time::disp()
{
    std::cout << hour
              << ':'
              << minute
              << ':'
              << second
              << std::endl;
}
void Time::input()
{
    std::cout << "Please input:";
    std::cin >> hour >> minute >> second;
    conversion(hour, minute, second);
}

int main(void)
{
    Time T;
    T.input();
    T.disp();

    return 0;
}