#include <stdio.h>
typedef unsigned char byte;
byte AND(byte a, byte b) //ворота И
{
    byte p;
    if (a * b == 0)
        p = 0;
    else
        p = 1;
    return p;
}

byte OR(byte a, byte b) //вентель ИЛИ
{
    byte p;
    if (a + b == 0)
        p = 0;
    else
        p = 1;

    return p;
}

byte XOR(byte a, byte b)
{
    byte p;
    if (a == b)
        p = 0;
    else
        p = 1;
    return p;
}