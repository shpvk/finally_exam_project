#include <iostream>
#include <Windows.h>
using namespace std; // You can't use this shit in big projects

int main()
{
    const int SIZE = 3;
    int arr[SIZE]{ 1,2,3 };
    std::cout << sizeof(arr) / sizeof(int);
    return 0;
}
