#include <iostream>

int main()
{
    //x^2+4x+1
    int x;
    int y;
    std::cin >> x;
    __asm {
        mov eax, x
        mul eax
        mov y, eax
        mov ebx, 4
        mov eax, x
        mul ebx
        add eax, y
        add eax, 1
        mov y, eax
    }
    std::cout << y;
}
