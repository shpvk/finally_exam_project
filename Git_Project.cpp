#include <iostream>
#include <Windows.h>
using namespace std; // это дерьмо в больших проектах нельзя использовать

int main()
{
    for (int i = 1000; i >= 0; i -= 7)
    {
        std::cout << i << std::endl;
        Sleep(100);
    }
    return 0;
}
