#include <stdio.h>
#include "printByte.c"
#include "adder.c"
#include "toolChain.c"
//пишу однобитный сумматор в целях изучения

/*      Таблица истинности для полусумматора
    n1      n2      carry   sum
    0       0       0       0
    1       0       0       1
    0       1       0       1
    0       0       1       1
    1       1       1       0

        Таблица истинности для полного сумматора
    n1     n2       c       carry       sum
    0       0       0       0           0
    1       0       0       0           1
    0       1       0       0           1
    0       0       1       0           1
    0       1       1       1           0
    1       1       0       1           0
    1       1       1       1           1

*/

int carry = 0;
int sum = 0;

int main()
{
    int A, B, C = 0;
    int S;

    printf("Пожалуйста, введите состояние A: ");
    scanf("%d", &A);
    printf("Пожалуйста, введите состояние B: ");
    scanf("%d", &B);

    S = AND(A, B);
    printf("\nВыполнить И операция A * B:");
    printf("%d\n", printByte(S));

    S = OR(A, B);
    printf("\nВыполнить ИЛИ операция A + B:");
    printf("%d\n", printByte(S));

    halfAdder(A, B);
    printf("\nПолу сумматор выполняет операцию сложения и перенос:");
    printf("%d", carry);
    printf("\nПолу сумматор выполняет операцию сложения, и сумма равна:");
    printf("%d\n", sum);

    fullAdder(A, B, C);
    printf("\nПолный сумматор выполняет операцию сложения и перенос:");
    printf("%d", carry);
    printf("\nПолный сумматор выполняет операцию сложения, и сумма равна:");
    printf("%d\n", sum);
}