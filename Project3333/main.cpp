#include <iostream>
#include <Windows.h>
#include <cstdlib>

int Faku(int a, int b) 
{
    if (b == 0) 
    {
        return 0;
    }
    if (b < 0) 
    {
        return -Faku(a, -b);
    }
    return a + Faku(a, b - 1);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int a = 4;
    int b = -5;

    int result = Faku(a, b);

    std::cout << result << "\n";

    return 0;
}