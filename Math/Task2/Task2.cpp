// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    //x!
    int x;
    int y;
    std::cin >> x;
    __asm {
        mov ecx, x
        mov eax, 1

        cycle:
        cmp ecx, 0
        je quit
        mul ecx
        dec ecx
        jmp cycle

        quit:
        mov y, eax
    }
    std::cout << y;
}
