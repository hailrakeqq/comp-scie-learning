#include <stdio.h>
#include "toolChain.c"

int carry = 0;
int sum = 0;

void halfAdder(int a, int b) //полусумматор
{
    sum = XOR(a, b);
    carry = AND(a, b);
}

void fullAdder(int a, int b, int c) //полный однобитный сумматор
{
    int fullCarry;
    halfAdder(a, b);
    fullCarry = carry;
    halfAdder(sum, c);
    carry = OR(fullCarry, carry);
}