#include <iostream>
#include <Windows.h>
using namespace std; // You can't use this shit in big projects

int main()
{
    for (int i = 1000; i >= 0; i -= 7)
    {
        std::cout << i << std::endl;
        Sleep(100);
    }
    return 0;
}
