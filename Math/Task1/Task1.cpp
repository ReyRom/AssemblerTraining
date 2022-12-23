#include <iostream>

int main()
{
    int x;
    __asm {
        mov eax, 2
        mov ebx, 3
        mul ebx
        mov x, eax
    }
    std::cout << x;
}
