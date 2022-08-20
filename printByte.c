#include <stdio.h>
typedef unsigned char byte;

int printByte(byte b) //вывод числа в двоичной системе
{
    for (int i = 0; i < 8; i++)
    {
        printf("%c", (b & 0x80) ? '1' : '0'); // 0x80 == 128 в десятичной
        b <<= 1;
    }
    printf("\n");
}
